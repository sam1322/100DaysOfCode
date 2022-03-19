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



    //  vector<int> avoidFlood(vector<int> &rains) {
    //     unordered_map<int,int>mp ; 
    //     set<int>st  ;
    //     int n = rains.size() ; 
    //     vector<int> ans(n,-1) ;
    //     for(int i = 0 ; i < n ; ++i ){
    //         if(rains[i] > 0 ){
    //             int lake = rains[i]  ;
    //             if(mp.count(lake)> 0 ){
    //                 auto it = st.upper_bound(mp[lake]) ; 
    //                 if(it!=st.end()){
    //                     ans[*it ] = lake ; 
    //                     st.erase(it); 
    //                 }
    //                 else{
    //                     return {} ; 
    //                 }
    //             }

    //             mp[lake] = i ; 
    //         }
    //         else {
    //             st.insert(i);
    //             ans[i] = 1 ;
    //         }

    //     }
    //     return ans ; 
    // }

// vector<vector<int>>mp;
//     string K ; 
//     string a ,b ; 
//     bool helper(int i,int j , string &out){
        
//         if( i >= a.size()  && j >= b.size() ){
//             return mp[i][j] = (out == K) ; 
//         }
//         cout<<i<<" "<<j<<" "<<out<<" "<<a[i]<<" "<<b[j]<<" "<<K <<endl;

//         if(mp[i][j] !=-1 )return mp[i][j] ; 

//         if(i < a.size() && a[i]==K[out.size()])
//         {   out.push_back(a[i]) ;
//             if(helper(i + 1 , j , out )) return mp[i][j] = true ;      
//             out.pop_back() ; 
//         }
        
//         if( j < b.size() && b[j]==K[out.size()])
//         {   out.push_back(b[j]) ;
//             if(helper( i , j + 1 , out )) return mp[i][j] = true ;  
//             out.pop_back() ;
//         }
//         return mp[i][j] = false ;
//     }
    
//     bool isInterleave(string s1, string s2, string s3) {
//         mp.assign(s1.size() + 1 ,vector<int>(s2.size() + 1 , -1 )) ;
//         K =s3 ; 
//         a = s1 ; 
//         b = s2 ;
//         string ans = "" ; 
//         return helper(0,0,ans) ;
//     }

    // int maximumSwap(int num) {
    //     string s = to_string(num) ;
    //     string r = s ; 
    //     sort(s.begin(),s.end(),greater<char>()) ; 
    //     int n = s.size() ; 
    //     for(int i = 0 ; i < n ;++i){
    //         if(s[i]!=r[i] ){
    //             int j ;
    //             for( j = n - 1 ; j >i ;--j ){if (r[j]==s[i])break ;}
    //             cout<<i<< " "<<s[i]<<" " <<r[i] <<" "<<j<<endl;
    //             swap(r[i], r[j]) ;
    //             break ;
    //         }
    //     }
    //     return stoi(r) ;
    // }

// void solve(){
//     int num = 2746 ; 
//     // num = 3235432;
//     cout<< maximumSwap(num)<<endl;
// }

vector<vector<int>> restoreMatrix(vector<int>row, vector<int> col) {
        int m = row.size(), n = col.size();
        vector<vector<int>> A(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i) {
            for (int j = 0 ; j < n; ++j) {
                A[i][j] = min(row[i], col[j]);
                row[i] -= A[i][j];
                col[j] -= A[i][j];
            }
        }
        return A;
    }

void solve(){
    vector<vector<int>> v = restoreMatrix({5 , 7 , 10} , {8 , 6 ,8}) ; 
    for(int i =0 ; i < 3 ;++i){
        for(int j = 0 ; j < 3 ; ++j){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

// void solved(){
//     string a,b,c ;
//     a = "abaaacbacaab" ; 
//     b = "bcccababccc" ;
//     c = "bcccabaaaaabccaccbacabb" ;


//     // a = "aabcc"; 
//     // b = "dbbca";
//     // c = "aadbbcbcac";

//     cout <<isInterleave(a,b,c)<<endl;
// }

// 

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
 
}


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
//  int poured = 100000009, query_row = 33, query_glass = 17 ; 
//   poured = 2, query_row = 1, query_glass = 1 ; 
//  cout<<std::fixed <<setprecision(6)<<champagneTower(poured,query_row,query_glass)<<endl;
// }

// void solve2(){
//     int n = 12 ; 
//     vector<int> primes = {2,7,13,19} ; 

//     n = 1000000;
//     primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541};

//     Show(primes);nl;
//     cout<<"Ans "<<nthSuperUglyNumber(n,primes);nl;
// }

void solve3(){
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


// recursion based algorithm

// map<string,vector<int>> mp ;

// vector<int> f(string s){
//     vector<int> res ;

//     if(mp.count(s) > 0)return mp[s] ; 

//     int n = s.size() ; 

//     for(int i = 0 ; i < n ; ++i){
//         char c = s[i] ; 
//         if(c=='+'||c=='-'||c=='*'){
//             vector<int> res1 = f(s.substr(0,i)) ; 
//             vector<int> res2 = f(s.substr(i+1)) ; 

//             for(auto i:res1 )
//             {
//                 for(auto j:res2){
//                     if(c == '+')
//                         res.push_back(i+j);
//                     else if(c=='-')
//                         res.push_back(i-j);                    
//                     else if(c=='*')
//                         res.push_back(i*j) ; 
//                 }
//             }
//         }
//     }

//     if(res.empty()){
//         res.push_back(stoi(s));
//     }

//     mp[s] = res ; 
//     return mp[s] ;
// }

// void solve4(){

//     string s = "2-1+1" ; 
//     s = "2*3-4*5";
//     mp.clear();
//     vector<int> ans = f(s);
    
//     Show(ans);nl;

// }

 
//     string simplifyPath(string path) {
//         //first split the files 
//         // in javascript or python this can be easily done with the split('/')
//         string str="" ;
//         vector<string> files;
//         int i = 0 , n = path.size() ;
//         for(int i = 0 ; i < n ; ++i){

//         while(i < n && path[i]!='/'){
//             str+=path[i++] ;
//             cout<<i<<" "<<str<< " "<<path[i]<<endl;
//                 }
//         if(str.empty()||str=="." ) {str="" ;continue ; }

//         cout<<str<<" : ";
        
//         if(str=="..")
//               {if(!files.empty())
//                 files.pop_back() ;}

//         else 
//             files.push_back(str) ;                
        
//         Show(files);
//         str="";
//         cout<<" : "<<str<<endl;
//         // i++;
        
//         }
//         cout<<"Str "<<str<<endl;
        
//         Show(files);nl;
//         string res = "/" ;
//         for(string s:files) res+=s + "/" ; 
//         if(res.size() > 1 )res.pop_back();
//         return res ; 
//     }

//     void solve(){
//         string s = "/a//b////c/d//././/..";
//         cout<<simplifyPath(s)<<endl;
//     }

// void solve(){
//     // vector<vi> a= {{1,2,3,4},
//     // {69,0,0,0,69} , 
//     // {0 ,1,1} , 
//     // {1,0,2,0,2,1}

//     // };

//     // fr(i,a.size())
//     //  {Show(avoidFlood(a[i]));nl;}
    

//     vi a= {1,2,3,4} ;
//      Show(avoidFlood(a));nl;
//     a = {69,0,0,0,69} ; 
//      Show(avoidFlood(a));nl;
//     a ={0 ,1,1} ;
//      Show(avoidFlood(a));nl;
//     a = {1,0,2,0,2,1};
//      Show(avoidFlood(a));nl;

    

// }