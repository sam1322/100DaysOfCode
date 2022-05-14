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
// // sieve , binomial coeff , pascal 


  
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> prices(n,inf),temp ;
        // vector<vector<vector<int>>> g(n);
        // for(auto x:flights){
        //     int u = x[0] , v = x[1] , w = x[2] ;
        //     g[u].push_back({v,w});
        // }
        prices[src]=0;
        for(int i = 0 ; i <min(k+1,n-1) ; ++i){
        temp = prices ;
          
            for(auto x:flights){
            // while(level <= k && !q.empty()){
                int u = x[0] ; 
                int v = x[1] ; 
                int w = x[2] ; 
                if(temp[u]==inf)continue; 
                 w += prices[u] ; 
                if(w < temp[v]){
                    temp[v] = w ;
                    // q.push(v); 
                }
                // level++;
                
            }
            prices = temp ;
        }
        for(int i = 0 ; i < n ; ++i )cout<<prices[i]<<" ";
        cout<<endl;
        
        return (prices[dst] == inf) ? -1 : prices[dst] ; 
        
    }
    

void solve(){
    int n , s ,d, k ;
    vector<vector<int>> flights = {{0,1,100},{1,2,100},{2,0,100},{1,3,600},{2,3,200}};
    // cin>>;
    n = 4 ; s = 0 ; d = 3 ; k = 1; 
    cout<<findCheapestPrice(n,flights,s,d,k)<<endl;
}

int main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout << fixed << setprecision(4);
    # ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    // freopen("out", "w", stdout);
    # endif
    solve();
}