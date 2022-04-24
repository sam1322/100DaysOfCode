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
 bool comparefn(vector<int> &a, vector<int> &b)
{
    if(a[0]!=b[0])
    return a[0]<b[0];
    return a[1] < b[1] ;
}

int f(vector<vector<int>> &p ,int x ,int y){
    int m ,l = 0 , r = p.size() -1, ans=-1;
    while(l < r){
        m = (l+r)/2 ;
        if(m <p.size() &&  p[m][0] >= x && p[m][1]>= y){
            ans = m ; 
            r = m  ; 
        }
        else l = m +1;
    }
    return p.size() - ans +1 ;
}

class Solution {
public:
    vector<int> countRectangles(vector<vector<int>>& rect, vector<vector<int>>& points) {
        // sort(points.begin(),points.end(), comparefn );
        vector<int> ans;
        sort(rect.begin() ,rect.end() , comparefn); 
        for(auto v:points){
            ans.push_back(f(rect,v[0],v[1]));
        }
        return ans ;
    }
};

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);

   solve();
}