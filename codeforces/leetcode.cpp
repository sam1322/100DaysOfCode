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

int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,long > mp ; 
        for(int i : arr){
            mp[i]++;
        }
        
        // vector<pair<int,int>> v(mp.begin() ,mp.end()) ;
        
    
        long long ans = 0; 
        for(auto [i,u]:mp){
            for(auto [j,v]:mp){
                int k = target - i - j ; 
                if(mp.count(k)==0)continue ;
                
                if(i==j && j==k){
                    ans+=((mp[k])*(mp[k]-1)*(mp[k]-2))/6; 
                }
                else if(i==j && j!=k){
                    ans+=mp[i] * (mp[i] - 1) / 2 * mp[k];
                }
                else if(i < j && j < k ){
                    ans+=(mp[i]*mp[v]*mp[k]); 
                }
                  cout<<ans<<" "<<i<<" "<<j<<" "<<k<<endl;
            }
            
        }
        
        return ans % int(1e9+ 7);
    }
int threeSumMulti1(vector<int>& A, int target) {
        unordered_map<int, long> c;
        for (int a : A) c[a]++;
        long res = 0;
        for (auto it : c)
            for (auto it2 : c) {
                int i = it.first, j = it2.first, k = target - i - j;
                if (!c.count(k)) continue;
                if (i == j && j == k)
                    res += c[i] * (c[i] - 1) * (c[i] - 2) / 6;
                else if (i == j && j != k)
                    res += c[i] * (c[i] - 1) / 2 * c[k];
                else if (i < j && j < k)
                    res += c[i] * c[j] * c[k];
               cout<<res<<" "<<i<< " "<<j <<" "<<k<<endl;
            }
        return res % int(1e9 + 7);
    }
void solve(){
   vi arr = {1,1,2,2,3,3,4,4,5,5}; 
   int target = 8 ;
   cout<<threeSumMulti(arr,target);nl;
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);

   solve();
}