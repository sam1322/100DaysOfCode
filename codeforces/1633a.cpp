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

//int solve(){
int solve(int n){
	// int n ;
	// cin>>n ;

	if(n%7==0)return n ; 
	else{
		queue<int> q ;
		q.push(n) ;
		int b = n ; 
		int r = 10 ;
		while(!q.empty()){
			int N =q.size() ; 
			for(int i = 0 ;i < N ;++i){
				n = q.front() ; 
				q.pop() ; 
				if(n%7==0){return n ;}
				for(int j = 9 ; j >=0 ;--j){
					int c = n%(r/10 ) ; 
					n/=r ; 
					n = n*r + j*(r/10) + c;
				 	q.push(n);
				}
			}
			r*=10 ;

		}
	}
	return -1;
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

    // while(tc--){
    // 	//cout<<solve()<<endl;
    //   solve();
    //   //cout<<endl;
    // }

    // tc = 1000 ;
    fr(i,tc){
    	int n ;
    	cin>>n;
    	cout<<solve(n)<<endl;
    }
}