#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define fr(i,a) for(int  i=0;i<a;i++)
#define forn(i,a,n) for(int i = a; i < n ;i++)
#define Sort(a) sort(a.begin(),a.end())
#define Rev(k)  reverse(k.begin(),k.end())
#define Sz(x) x.size()
#define Show(v) for(int i =0 ; i < v.size();i++) cout<<v[i] //only for sting and vector
#define Mod 1000000007
#define Fi first
#define Sc second
#define pb push_back
#define Ios ios::sync_with_stdio(false)
#define Tie cin.tie(0);    cout.setf(ios::fixed); cout.precision(0);
#define inf 0x3f3f3f3f
#define mk make_pair
template<typename T, typename V> inline void mn(T &x, V y) { if(y < x) x = y; }
template<typename T, typename V> inline void mx(T &x, V y) { if(x < y) x = y; }
//const int MAXN = 200100;
typedef long long  ll;
#define vi vector<int>

void bubblesort(vector<int> &v, int n ){
	for(int i =  0 ; i < n-1 ; i++){
		for(int j = i+1 ; j < n ; j++){
			if(v[i]>v[j]){
				swap(v[i],v[j]) ; 
			}
		}
	}
}

int main()
{
	int n ; 
	cout<<"Enter the no of elements"<<endl;
	cin>>n;
	vector<int> v ;
	for(int i = 0 ; i < n ; i++){
		int a; 
		cin>>a; 
		v.push_back(a) ;

	}
	bubblesort(v,n) ;
	cout<<"Sorted string : "<<endl;
	for(int i = 0 ; i < n ;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}