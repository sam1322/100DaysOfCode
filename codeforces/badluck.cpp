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

const int N = 1e6 ; 

int f(vector<vector<int>>&a, int in ,int timeleft ){
	if( in == a.size() ){
		if(timeleft < N){
			return inf ; 
		}
		else return 0 ;
	}

	int k = min(f(a,in + 1,timeleft - 1), a[in][1]  + f(a,in + 1 , timeleft + a[in][0])) ;
	cout<<in <<" "<<timeleft<<" "<<k<<endl;
	return k ;
}

void solve(){
	vector<vi> a= { 
  {8,5},
  {6,3},
  {0,8},
  {1,7},
  {5,9},
  {5,5}
} ;
	int sum = 0 ; 
	for(auto i:a)sum+=i[1] ;
	int k = f(a,0,N);
	cout<<k<<" "<<sum - k <<endl;
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    solve();
}