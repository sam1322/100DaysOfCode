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

 int findTheWinner(int n, int k) {
        vector<int> vis(n,0);
        int c = 0 , j = 0  ;
        while(c < n -1){
            c++;
            for(int i = 0 ; i < k - 1 ;){
                if(vis[j]){
                j = ( j + 1)% n ; 
                    continue ;}
                else {j = ( j + 1)% n ; 
                i++;}
                cout<<j<<" ";
            }
            while(vis[j]){
                j = ( j + 1)% n ;    
            }
            vis[j] = 1 ;
            
            nl;Show(vis);nl;
            while(vis[j]){
                j = ( j + 1)% n ; 
                
            }
            cout<<"Next "<<j  <<endl;
                
        }
        return j + 1 ;
    }
void solve(){
   int n = 5 , k = 2 ; 
   cout<<findTheWinner(n,k);nl;
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);

   solve();
}