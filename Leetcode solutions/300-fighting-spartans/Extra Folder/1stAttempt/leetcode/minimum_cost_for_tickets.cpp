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
 
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(366) ; 
        for(int i = 1 ; i < 366 ;++i ) {
            if(find(days.begin() ,days.end() , i)!=days.end()) {
             //    if(i >=30)
             // dp[i] = min(costs[0] + dp[i-1] , min(costs[1] + dp[i-7] , costs[2] + dp[i -30])) ; 

        // else if(i>=7) dp[i] = min(costs[0] + dp[i-1] , costs[1] + dp[i-7] ) ; 
        // else        if(i == 1) dp[i] = costs[0] ;
             dp[i] = min(costs[0] + dp[i-1] , min(costs[1] + dp[max(0,i-7)] , costs[2] + dp[max(0,i -30)])) ; 
            	
            }
            else{
                dp[i] = dp[i-1] ; 
            }
        } 


        Show(dp);cout<<endl;
        return dp[365] ; 
    }


void solve(){

	vector<int> days = {1,4,6,7,8,20} ; 
vector<int> costs = {7,2,15} ; 
	cout<<mincostTickets(days,costs)<<endl;
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    
   // #ifndef ONLINE_JUDGE
   // freopen("in", "r", stdin);
   // freopen("err", "w", stderr);
   // freopen("out", "w", stdout);
   // #endif
 
    int tc;
    //scanf("%d", &tc) ; 
    cin>>tc; 
 
    while(tc--){
    	//cout<<solve()<<endl;
      solve();
      //cout<<endl;
    }
}