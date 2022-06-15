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
#define vp vector<pair<int,int>> 
typedef pair<int,int> pii; 
// sieve , binomial coeff , pascal 

int mod = 1e9 + 7 ; 
map<pair<int,int>, int> mp;
    vector<vector<int>> adj = {
            {4,6}  , //0            
            {6,8}  , //1            
            {7,9}  , //2           
            {4,8}  , //3           
            {0,3,9}  , //4           
            {   }  , //5           
            {0,1,7}  , //6           
            {2,6}  , //7           
            {1,3}  , //8           
            {2,4}  , //9           
        }; 

    int ans ;
    int dfs(int n, int i ){
        // cout<<i<<" ";

        if(n==1){
            // ans = (ans + 1 )%mod ; 
            // cout<<endl;
            return 1  ;  

        }
        pair<int,int> p = {n ,i } ;
    if(mp.count(p)){
    	return mp[p] ; 
    }

        int res = 0 ; 
        for(int j : adj[i]){
            res = (res + dfs(n-1,j))%mod; 
        }
        return mp[p] =  res % mod  ; 
    }
    
    int knightDialer(int n) {
        // adj = 
        ans = 0 ; 
        for(int i = 0 ; i < 10 ;++i){
          ans = (ans +  dfs(n , i ))%mod ; 
        }
        return ans % mod; 
    }


void solve(){
	int n  = 2;
	cin>>n ;  
	cout<<knightDialer(n) <<endl;
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    
   // #ifndef ONLINE_JUDGE
   // freopen("in", "r", stdin);
   // freopen("err", "w", stderr);
   // freopen("out", "w", stdout);
   // #endif

 solve();
}