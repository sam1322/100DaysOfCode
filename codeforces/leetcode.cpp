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
bool compare_float(float x, float y, float epsilon = 0.01f){
   if(fabs(x - y) < epsilon)
      return true; //they are same
      return false; //they are not same
}



    int minimumLines(vector<vector<int>>& s) {
        // vector<float> v;
        int ans = 1 ;
        float  cur , prev = (s[1][1] - s[0][1]) / ( 1.0 * (s[1][0] - s[0][0]) ); 
        for(int i = 1; i < s.size() - 1 ; ++i ){
            cur = (s[1+i][1] - s[i][1]) / ( 1.0 * (s[1+i][0] - s[i][0]) ); 
            cout<<i<<" "<<prev<<" "<<cur<<" ";
            if(!compare_float(prev, cur, 0.0001f)){
                ans++;
            }
                prev= cur;
            cout<<ans<<endl;
        }
               
        return ans ;
    }

    void solve(){
        vector<vector<int>> v = {{72,98},{62,27},{32,7},{71,4},{25,19},{91,30},{52,73},{10,9},{99,71},{47,22},{19,30},{80,63},{18,15},{48,17},{77,16},{46,27},{66,87},{55,84},{65,38},{30,9},{50,42},{100,60},{75,73},{98,53},{22,80},{41,61},{37,47},{95,8},{51,81},{78,79},{57,95}}   ;
        cout<<minimumLines(v);nl;
    }

  
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//         vector<int> prices(n,inf),temp ;
//         // vector<vector<vector<int>>> g(n);
//         // for(auto x:flights){
//         //     int u = x[0] , v = x[1] , w = x[2] ;
//         //     g[u].push_back({v,w});
//         // }
//         prices[src]=0;
//         for(int i = 0 ; i <min(k+1,n-1) ; ++i){
//         temp = prices ;
          
//             for(auto x:flights){
//             // while(level <= k && !q.empty()){
//                 int u = x[0] ; 
//                 int v = x[1] ; 
//                 int w = x[2] ; 
//                 if(temp[u]==inf)continue; 
//                  w += prices[u] ; 
//                 if(w < temp[v]){
//                     temp[v] = w ;
//                     // q.push(v); 
//                 }
//                 // level++;
                
//             }
//             prices = temp ;
//         }
//         for(int i = 0 ; i < n ; ++i )cout<<prices[i]<<" ";
//         cout<<endl;
        
//         return (prices[dst] == inf) ? -1 : prices[dst] ; 
        
//     }
    

// void solve(){
//     int n , s ,d, k ;
//     vector<vector<int>> flights = {{0,1,100},{1,2,100},{2,0,100},{1,3,600},{2,3,200}};
//     // cin>>;
//     n = 4 ; s = 0 ; d = 3 ; k = 1; 
//     cout<<findCheapestPrice(n,flights,s,d,k)<<endl;
// }

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