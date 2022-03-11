#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define fr(i,a) for(int  i=0;i<a;i++)
#define forn(i,a,n) for(int i = a; i < n ;i++)
#define Sort(a) sort(a.begin(),a.end())
#define Rev(k)  reverse(k.begin(),k.end())
#define Sz(x) x.size()
#define Show(v) for(int i =0 ; i < v.size();i++) cout<<v[i]<<" "; //only for strings and vector
#define Mod 1000000007
#define Fi first
#define Sc second
#define pb push_back
#define Ios ios::sync_with_stdio(false);cin.tie(0);cout.setf(ios::fixed); cout.precision(0);
#define inf 0x3f3f3f3f
#define mk make_pair
template<typename T, typename V> inline void mn(T &x, V y) { if(y < x) x = y; }
template<typename T, typename V> inline void mx(T &x, V y) { if(x < y) x = y; }
//const int MAXN = 200100;
typedef long long  ll;
#define vi vector<int>
#define vl vector<ll>
#define vp vector<pair<int,int>> 
#define nl cout<<endl;
typedef pair<int,int> pii; 
// sieve , binomial coeff , pascal 

double champagneTower(int p, int i, int j) {
        vector<double> dp(i+1); 
        dp[0] = p ;

        for(int k = 1 ; k <= i ;++k){
        	for(int l = k ; l >=0 ; --l ){
        		dp[l+1] +=dp[l] = max(0.0,(dp[l] - 1)/2) ; 
        	}

        }
        return min(dp[j],1.0);
    }

struct compare{
  public:
  bool operator()(vector<long long > &a,vector<long long> & b) // overloading both operators 
  {
      // return a.w < b.w: // if you want increasing order;(i.e increasing for maxPQ)
      // return a.w > b.w // if you want reverse of default order;(i.e decreasing for minPQ)

    return a[0] > b[0] ; 

   }
};

int nthSuperUglyNumber(int n, vector<int>& primes) {
    priority_queue<vector<long long> ,vector<vector<long long>>, compare > q ;
    vector<long long> nums(n) ;
    nums[0] = 1 ;
    for(int i : primes){
        q.push({i,i,0} );
    }          
    int j = 0  ; 
    for(int i = 1 ;  i < n ;){
        // long long [num,prime,index] = q.top() ;
        // if(j >10) break ; j++;cout<<j <<" ";
        vector<long long> v = q.top() ;
        q.pop();
        long long num = v[0] , prime = v[1] , index = v[2] ; 
        // cout<<i<<" "<<num<<" " <<prime<<" "<<index <<endl;
        if(num!=nums[i-1]){
            nums[i] = num ; 
            i++; 
        }
        q.push( { prime*nums[index+1] , prime , index + 1} );
    }
    return nums[n-1];

}

// //int solve(){
// void solve1(){
// 	int poured = 100000009, query_row = 33, query_glass = 17 ; 
// 	 poured = 2, query_row = 1, query_glass = 1 ; 
// 	cout<<std::fixed <<setprecision(6)<<champagneTower(poured,query_row,query_glass)<<endl;
// }

// void solve2(){
//     int n = 12 ; 
//     vector<int> primes = {2,7,13,19} ; 

//     n = 1000000;
//     primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541};

//     Show(primes);nl;
//     cout<<"Ans "<<nthSuperUglyNumber(n,primes);nl;
// }

void solve(){
    char str[100];
    char c[100];
    char d[100];


    printf("Line of text: \n\n");
    scanf(" %[^\n]s", str);

    printf("\nWord: \n");
    scanf("%s", c);

    printf("%s : %s",str,c);


    // printf("No of occurences: %d\n", countOccurences(str, c));

    // printf("Word to replace:\n");
    // scanf("%s", d);

    // char* result = NULL;

    // result = replaceWord(str, c, d);

    // printf("Result:\n\n");
    // printf("%s", result);


}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
   //  solve();
   // #ifndef ONLINE_JUDGE
   // freopen("in", "r", stdin);
   // freopen("err", "w", stderr);
   // freopen("out", "w", stdout);
   // #endif

    solve();
       //  int tc=1;
   //  //scanf("%d", &tc) ; 
   //  // cin>>tc; 

   //  while(tc--){
   //  	//cout<<solve()<<endl;
   //    solve();
   //    //cout<<endl;
   //  }
}