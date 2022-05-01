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
//  bool comparefn(vector<int> &a, vector<int> &b)
// {
//     if(a[0]!=b[0])
//     return a[0]<b[0];
//     return a[1] < b[1] ;
// }

// int f(vector<vector<int>> &p ,int x ,int y){
//     int m ,l = 0 , r = p.size() -1, ans=-1;
//     while(l < r){
//         m = (l+r)/2 ;
//         if(m <p.size() &&  p[m][0] >= x && p[m][1]>= y){
//             ans = m ; 
//             r = m  ; 
//         }
//         else l = m +1;
//     }
//     return p.size() - ans +1 ;
// }

// class Solution {
// public:
//     vector<int> countRectangles(vector<vector<int>>& rect, vector<vector<int>>& points) {
//         // sort(points.begin(),points.end(), comparefn );
//         vector<int> ans;
//         sort(rect.begin() ,rect.end() , comparefn); 
//         for(auto v:points){
//             ans.push_back(f(rect,v[0],v[1]));
//         }
//         return ans ;
//     }
// };

// struct  compare
// {
//     // queue elements are vectors so we need to compare those
//     bool operator()(std::vector<int> const& a, std::vector<int> const& b) const
//     {   
//         return a[0] > b[0];
//     }
// };

// class Solution {
// public:
//     vector<int> par;
//     int dist(vector<int> &p1,vector<int> &p2){
//         return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1]) ; 
//     }
    
//     int find(int u){
//        if(par[u] ==-1)return u ;
//         return par[u] = find(par[u]) ;
//     }
    
//     int minCostConnectPoints(vector<vector<int>>& points) {
//         int n = points.size() ;
//         vector<bool> vis(n) ;
//         par.assign(n,-1);
        
//         int ans  = 0 ;
//         priority_queue<vector<int>,vector<vector<int>> , compare> q; 
//         for(int i = 0 ; i < n  ;++i)
//             for(int j = i+1 ; j < n;++j) 
//                 q.push({dist(points[i],points[j]),i,j});
             
//         for(int i = 0 ; i < n ; ){
//             vector<int> V = q.top(); 
//             q.pop() ; 
//             int dist = V[0] , u = V[1] , v = V[2] ;
//             int a= find(u) , b = find(v);
//             if(a==b)continue ;
//             i++;
            
//             par[a] = b ;
            
//             ans+=dist ; 
            
//         }
            
        
//         return ans ;
//     }
// };

  // double bfs(map<string, vector<pair<string,double>>> &mp , string &src, string &end){
  //       // if(src==end){
  //       //     for( auto x:mp[src]){
  //       //         if(x[1]==end)return x[2] ;
  //       //     }
  //       //     return -1; 
  //       // }
  //       if(mp.count(src)==0||mp.count(end)==0)return -1;
  //       cout<<src<<" : "<<end;nl;
  //       vector<pair<string,double>> q;
  //       set<string> vis;
  //       q.push_back({src,1.0});
  //       vis.insert(src);

  //       while(!q.empty()){
  //           pair<string,double> V = q.front() ;
  //           q.erase(q.begin()) ;
  //           string u = V.first;
  //           double ans = V.second ;

  //           if(u == end){
  //               return ans ;
  //           }
  //           cout<<u<<" "<<ans<<" : ";
  //           for(auto x:mp[u]){
  //               string v = x.first ;
  //               double wt = x.second ;
  //               if(vis.find(v)==vis.end()){
  //               cout<<v<<" , "<<wt<<" ; ";
  //                   vis.insert(v);
  //                   q.push_back({v,wt*ans}) ;                     
  //               }
  //           }

  //           cout<<endl;
  //       }
  //       return -1.0 ;
  //   }
    
  //   vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& val, vector<vector<string>>& quer) {
  //       map<string, vector<pair<string,double>>> mp; 
  //       static int z = 0 ;
  //       int n =  eq.size() ; 
  //       for(int i = 0 ; i < n ;++i){
  //           mp[eq[i][0]].push_back({eq[i][1],val[i]}) ;
  //           mp[eq[i][1]].push_back({eq[i][0],1.0/(1.0*val[i])}) ;
  //       }
  //       vector<double> ans;
  //       cout<<z++<<endl; 
  //       for(auto x:mp){
  //           cout<<x.first<<" : ";
  //           for(auto y : x.second){
  //               cout<<y.first<<" , " <<y.second<<" ; ";
  //           }
  //           cout<<endl;
  //       }
  //       for(int i = 0 ; i < quer.size() ;++i){
  //           ans.push_back(bfs(mp,quer[i][0],quer[i][1])) ; 
  //           // cout<<ans.back()<<endl;
  //       }
  //       return ans ;
  //   }

  //   void solve(){
  //       vector<vector<string>> v= {{"a","b"},{"b","c"}} ; 
  //       vector<double> val = {2.0,3.0} ; 
  //       vector<vector<string>> q = {{"a","c"},{"b","a"},{"a","e"},{"a","a"},{"x","x"}} ; 
  //       vector<double> x  = calcEquation(v,val,q);nl;
  //       Show(x);nl;
  //   }

class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
    
      unordered_set<string> st; int x =  0 , n = nums.size(); 
        for(int i = 0 ;  i < n ;++i){
            for(int len = i; len <= n ;++len ){
                int x = 0 ,f = 1;
                string s = "" ; 
                for(int j = i ; j < len ; ++j ){
                    if(nums[j]%p==0)x++;
                    if(x > k ){
                        f = 0 ; 
                        break ; 
                    }
                    // s+=to_string(nums[j])+"#" ;
                    s.push_back(nums[j]);
                }
                cout<<i<<" : "<<i + len<<" ; "<<s<<endl;
                if(f && !s.empty()) 
                st.insert(s) ; 
            }
        }
        return st.size() ;
    }
};

void solve(){
    Solution s ;
    // vector<int> v = {14,28,24,29,86,92,10,61,45,9,50,67,49,40,89,57,18,32,52,21,21,85,64,76,23,85,11,50,4,68,12,42,69,43,87,95,11,16,72,81,58,41,30,18,42,66,57,54,93,44,48,2,82,38,5,25,56,16,76,27,58,68,75,57,74,32,50,9,37,33,92,97,94,25,76,63,34,8,81,41,70,14,74,17,25,36,93,91,55,46,63,6,71,16,22,43,12,39,92,2,78,46,70,91,47,96,25,37,77,76,89,41,88,84,24,19,13,8,89,80,62,44,81,35,21,27,13,83,80,53,27} ;
    // int k  = 41 , p= 64;

    vector<int> v = {9,67,64,58,51,35,75,33,1,66,63,83,62,78,83,62,14,14,84,22,92,87,34,80,24,3,90,7,88,32,30,68,29,41,41,25,98,83,17,6,7,62,39,59,48,89,76,82,74,67,9,26,34,50,67,13,70,53,25,37,86,23,13,17,85,86,46,10,49,8,56,74,90,87,18,46,88,73,35,100,7,52,77,41,9,1,98,43,87,31,33,74,31,12,24,77,71,5,68,47,67,2,36,31,23,41,9,87,15,48,52,54,9,89,88,24,30,82,83,7,3,75,40,35,6,26,79,14,62,68,29,80,49,92,62,100,26,88,31,27,58,80,35,80,54,29,34,62,80,66,50,63,98,8,68,25,61,92,38,80,86,44,42,44,45,14,37,77,58,8,98,83,50,72,84,68,40,45,52,7};
    int k = 128 , p = 65  ;
    // int k,p,n ;
    // cin>>n;
    // vector<int> v(n) ; 
    // for(int i = 0 ; i < n ; ++i)cin>>v[i];
    // cin>>k>>p;


    cout<<s.countDistinct(v,k,p);nl;
}

int main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout << fixed << setprecision(4);
    // # ifndef ONLINE_JUDGE
    // freopen("in", "r", stdin);
    // freopen("out", "w", stdout);
    // # endif
    solve();
}