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
void solve(){
	// int n ;
	// cin>>n; 
	// int sum = 0 ;
	// while(n>0){
	// 	int r = n%10; 
	// 	if(r%2)sum+=r;
	// 	n/=10;
	// }
	// cout<<sum<<endl;

	for(int i = 0 ; i < 3 ;++i ){
		for(int j = 0 ; j< 3 ;++j){
			cout<<i<<j<<" " ;
		}
		cout<<endl;
	}
	

}


int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    solve(); 
}