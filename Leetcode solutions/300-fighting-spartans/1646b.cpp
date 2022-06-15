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
ll sumr , sumb , nr,nb; 
bool check(){
	return sumr > sumb && nr < nb ; 
}
int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

vector<int> f(int y) {
    // srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    // srand(y); // atoi(s) converts an array of chars to int
    int n = rand(2, 10);
    // printf("%d\n", n);
    cout<<"N : "<<n <<endl;
    set<int> used;
    vector<int> v;
    for(int i = 0; i < n; ++i) {
        int x;
        x = rand(1, 10);

        // do {
        //     x = rand(1, 10);
        // } while(used.count(x));
        // printf("%d ", x);
        v.push_back(x);
        used.insert(x);
    }
    // puts("");
    return v; 
}
//int solve(){
void Solve(){
	int n ,sum = 0 ;
	cin>>n ;
	vi a(n) ;

	// vi a = f(1);

	// n = a.size() ;

	fr(i,n){
		cin>>a[i];
		sum+=a[i];}
	Sort(a); 
	// Show(a);nl;
	// sumr = 0 , nr =0 , sumb =0 , nb= 0;
	// sumr = a.back() ;
	// sumb = sum -a.back() ; 
	// nr = 1 ;
	// nb = n - 1;
	sumr= a.back() ;
	sumb= a[0] ; 
	nr = 1 , nb = 1 ;
	int i = 1 , j = n-2;
		// cout<<sumr<<" "<<sumb<<" "<<nr<< " "<<nb<<endl;
	while( i > 0 && j > 0 && i <= j && i < n && j < n && !check()){
		if( i !=j-1 && sumr > sumb ){
			nb++;
			sumb+=a[i++];
		}
		else if(i !=j-1 &&  nr < nb ){
			sumr+=a[j--];
			nr++;
		}
		else break;

		cout<<sumr<<" "<<sumb<<" "<<nr<< " "<<nb<<endl;
	}
		// else if(nr >= nb){
		// 	if( i>0 && nb >1 ){
		// 		sumb=a[i] ;
		// 		sumr+=a[i]; 
		// 		nr
		// 		i--;

		// 	}
		// 	else break;
			
		// }
	// }

		// cout<<sumr<<" "<<sumb<<" "<<nr<< " "<<nb<<endl;
	if(check())cout<<"YES";
	else cout<<"NO" ;
	cout<<endl;	
}


void solve(){
	int n ; 
	cin >> n ;
	vi a(n); 
	fr(i,n)cin>>a[i] ;
	Sort(a); 
	vl prefix(n) , suffix(n) ;
	prefix[0] = a[0] ;
	suffix[0] = a[n-1] ;  
	for(int i = 1; i <=n/2 ;++i){
		prefix[i] = prefix[i-1] + a[i] ; 
		suffix[i] = suffix[i-1] + a[n-i-1] ; 
 	}
 	for(int i = 1 ; i <= n/2 ;++i){
 		if(n/2==0 && i==n/2)break;
 		// cout<<i<<" "<< prefix[i] <<" "<<suffix[i-1]<<endl;
 		if( prefix[i] < suffix[i-1]){
 			cout<<"YES"<<endl;
 			return ;
 		}
 	} 

 	cout<<"NO"<<endl;
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    
   #ifndef ONLINE_JUDGE
   freopen("in", "r", stdin);
   freopen("err", "w", stderr);
   freopen("out", "w", stdout);
   #endif

    int tc;
    //scanf("%d", &tc) ; 
    cin>>tc; 

    while(tc--){
    	//cout<<solve()<<endl;
      solve();
      //cout<<endl;
    }
}