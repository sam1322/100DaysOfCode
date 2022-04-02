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
 long long numberOfWays(string s) {
        // vector<int> zero ,one ;
        vector<long long> v ; 
        long long  i= 0 ,c = 0 ,x = 0 , y =  0 , n = s.size(); 
 
        while(i < n){
            char ch= s[i] ; 
            c = 0 ;
            while(i < n && s[i]==ch){
                c++;
                i++;
            }
            v.push_back(c) ;
            if(v.size() % 2 )x+=c ; 
            else y+=c  ;
        }
        
        i = 0 ;
        long long ans = 0 ,cur;
        n = v.size() ;
        while( i <= n - 3){
            if(i %2 ==0 ){
                x -=v[i] ; 
                cur = x ;
            }
            else{ 
                y-=v[i] ;
                cur = y ;
            }
            ans+=v[i]*v[i+1]*(cur) ;
            ++i;
        }
        return ans ;
    }

void solve(){
    string s = "111000";
    s="001101" ;
    cout<<numberOfWays(s);nl;
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
 solve() ; 

}

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// #define fr(i,a) for(int  i=0;i<a;i++)
// #define forn(i,a,n) for(int i = a; i < n ;i++)
// #define Sort(a) sort(a.begin(),a.end())
// #define Rev(k)  reverse(k.begin(),k.end())
// #define Sz(x) x.size()
// #define Show(v) for(int i =0 ; i < v.size();i++) cout<<v[i]<<" "; //only for strings and vector
// #define Mod 1000000007
// #define Fi first
// #define Sc second
// #define pb push_back
// #define Ios ios::sync_with_stdio(false);cin.tie(0);cout.setf(ios::fixed); cout.precision(0);
// #define inf 0x3f3f3f3f
// #define mk make_pair
// template<typename T, typename V> inline void mn(T &x, V y) { if(y < x) x = y; }
// template<typename T, typename V> inline void mx(T &x, V y) { if(x < y) x = y; }
// //const int MAXN = 200100;
// typedef long long  ll;
// #define vi vector<int>
// #define vl vector<ll>
// #define vp vector<pair<int,int>> 
// #define nl cout<<endl;
// typedef pair<int,int> pii; 
// // sieve , binomial coeff , pascal 

// struct compare{
//   public:
//   bool operator()(vector<int > &a,vector<int> & b) // overloading both operators 
//   {
//       // return a.w < b.w: // if you want increasing order;(i.e increasing for maxPQ)
//       // return a.w > b.w // if you want reverse of default order;(i.e decreasing for minPQ)
//     if(a[0] == b[0] ){
//         return a[1] > b[1] ; 
//     }
//     return a[0] > b[0] ; 

//    }
// };

//  vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
//     priority_queue<vector<int> , vector<vector<int>> , compare> q ; 
//     vector<int> ans; 
//     int n = mat.size() ; 
//     if(n==0||k==0)return ans; 
//     int m = mat[0].size() ; 
//     for(int i = 0 ; i < n ; ++i ){
//         int c =0 ;
//         for(int j = 0 ; j < m ; ++j ){
//             if(mat[i][j]==0){
//                 q.push({c,i}) ; 
//                 break ; 
//             }
//             c++ ; 
//         }
//     }
//     int l = 0 ; 
//     while(!q.empty() && k-- ){
//         vi V = q.top() ; 
//         cout<<"index "<< l++ <<" ";
//         Show(V);nl ; 
//         ans.push_back(V[1]) ; 
//         q.pop() ; 
//     }

//     while(!q.empty()  ){
//         vi V = q.top() ; 
//         cout<<"index "<< l++ <<" ";
//          Show(V);nl ; 
//         // ans.push_back(q.top()[1]) ; 
//         q.pop() ; 
//     }
//     return ans ;
// }



// void solve(){
//        vector<vi> v = {{1,1,0,0,0},
//          {1,1,1,1,0},
//          {1,0,0,0,0},
//          {1,1,0,0,0},
//          {1,1,1,1,1}
//      };
//  int k = 3 ;

//         v  = {{1,0,0,0},
//  {1,1,1,1},
//  {1,0,0,0},
//  {1,0,0,0}} ; 
// k = 2 ; 

//     Show(kWeakestRows(v,k));nl;
// }

// //     int dif(vector<int> &a)
// //     {
// //         return a[0] - a[1] ; 
// //     }
// //     int twoCitySchedCost(vector<vector<int>>& a) {
// //         int sum0 = 0 , sum1 = 0 , n = a.size()  ;
        
// //         // for(int i = 0 ; i < n ; ++i ){
// //         // sum0+=a[i][0];    
// //         // sum1+=a[i][1];    
// //         // }

// //         sort(a.begin(),a.end(),[](const vector<int> A ,const vector<int> b ){
// //             int a1 = (A[0] - A[1]);
// //             int b1 = (b[0] - b[1])   ; 
// //             return a1 < b1 ; 
// //         } ) ; 
// //         int c1 = 0 , c2 = 0 ,ans = 0 ; 
// //         for(int i = 0 ; i < n ; ++i){
// //         // for(int i = 0 ; i < a.size() / 2  ;++i){
// //             cout<<a[i][0]<<" "<<a[i][1] <<" "<<ans<<endl;
// //             // ans += a[i][0] + a[i + n / 2][1];
// //             if( i < n/2 )ans+=a[i][0] ; 
// //             else 
// //                 ans+=a[i][1] ; 
// //             // if(dif(A) < 0){
// //             //     if(c1 < n/2){
// //             //         ans+=A[0] ;
// //             //         c1++;
// //             //     }
// //             //     else {
// //             //         ans+=A[1] ; 
// //             //         c2++ ; 
// //             //     }                    
// //             // }
// //             // else {
// //             //     if(c2 < n/2){
// //             //         ans+=A[1] ;
// //             //         c2++;
// //             //     }
// //             //     else {
// //             //         ans+=A[0] ; 
// //             //         c1++ ; 
// //             //     }
// //             // }
// //         }
// //         return ans ;
// //     }

// // void solve(){
// //     vector<vector<int> > a = {
// //         {10,20},{30,200},{400,50},{30,20}
// //     } ; 
// //     cout<<twoCitySchedCost(a)<<endl;

// //     a = {{259,770},{448,54},{926,667},{184,139},{840,118},{577,469} } ;

// //     cout<<twoCitySchedCost(a)<<endl;
// //     a = {{515,563},{451,713},{537,709},{343,819},{855,779},{457,60},{650,359},{631,42} } ;


// //     cout<<twoCitySchedCost(a)<<endl;
// // }

// // int N ;
// //     vector<int>ans ;
// //     bool f(vector<int> &a ,int n , int i , int x, int y ){
// //         cout<<"x = "<<x<<" Y = "<<y<<endl;
// //         if(i<0 || n <= 0){
// //             if(x >= y)return false ; 
// //             if(n > 0 )ans.back() +=n ; 
// //             cout<<x <<" "<<y<<endl;
// //             return true ; 
// //         }

// //         cout<<"n = " <<n<< " ; a["<<i<<"] = " <<a[i]<<" ; x =  "<<x<<" ; y =  "<<y<<endl; 
// //         int k = i ;                 
        
// //         if(a[i] + 1 <=n)
// //         {
// //             ans[i] = a[i] + 1;
// //             n-=a[i] + 1 ;
// //             y+=i ;
// //             if( f(a,n,i-1,x,y) )return true ; 
// //             y-=i ; 
// //             n+=a[i]+ 1;
// //             ans[i] = 0 ;

// //         }    

// //         if(a[i]==0)k = 0 ;
// //         x+=k; 
// //         // cout<<"X " <<x <<endl;
// //         bool K =  f(a,n,i-1,x,y) ;
// //         x-=k ;         
// //         if(K)return true ; 
    
// //         return false ;
// //     }
    
// //     vector<int> maximumBobPoints(int numArrows, vector<int>& aliceArrows) {
// //         // ans.clear() ;
// //         N = 12 ; 
// //         ans.assign(N,0) ;
// //        if( f(aliceArrows,numArrows,N-1,0,0 ) ) cout<<"YES"<<endl;
// //         return ans ;
// //     }

// //     void solve(){
// //         N = 9; 
// //         vector<int>a = {1,1,0,1,0,0,2,1,0,1,2,0} ; 
// //         Show(a);nl;
        
// //         vector<int> v = maximumBobPoints(N , a ) ;
// //         Show(v);nl; 
// //         Show(a);nl;
// //     }



//     //  vector<int> avoidFlood(vector<int> &rains) {
//     //     unordered_map<int,int>mp ; 
//     //     set<int>st  ;
//     //     int n = rains.size() ; 
//     //     vector<int> ans(n,-1) ;
//     //     for(int i = 0 ; i < n ; ++i ){
//     //         if(rains[i] > 0 ){
//     //             int lake = rains[i]  ;
//     //             if(mp.count(lake)> 0 ){
//     //                 auto it = st.upper_bound(mp[lake]) ; 
//     //                 if(it!=st.end()){
//     //                     ans[*it ] = lake ; 
//     //                     st.erase(it); 
//     //                 }
//     //                 else{
//     //                     return {} ; 
//     //                 }
//     //             }

//     //             mp[lake] = i ; 
//     //         }
//     //         else {
//     //             st.insert(i);
//     //             ans[i] = 1 ;
//     //         }

//     //     }
//     //     return ans ; 
//     // }

// // vector<vector<int>>mp;
// //     string K ; 
// //     string a ,b ; 
// //     bool helper(int i,int j , string &out){
        
// //         if( i >= a.size()  && j >= b.size() ){
// //             return mp[i][j] = (out == K) ; 
// //         }
// //         cout<<i<<" "<<j<<" "<<out<<" "<<a[i]<<" "<<b[j]<<" "<<K <<endl;

// //         if(mp[i][j] !=-1 )return mp[i][j] ; 

// //         if(i < a.size() && a[i]==K[out.size()])
// //         {   out.push_back(a[i]) ;
// //             if(helper(i + 1 , j , out )) return mp[i][j] = true ;      
// //             out.pop_back() ; 
// //         }
        
// //         if( j < b.size() && b[j]==K[out.size()])
// //         {   out.push_back(b[j]) ;
// //             if(helper( i , j + 1 , out )) return mp[i][j] = true ;  
// //             out.pop_back() ;
// //         }
// //         return mp[i][j] = false ;
// //     }
    
// //     bool isInterleave(string s1, string s2, string s3) {
// //         mp.assign(s1.size() + 1 ,vector<int>(s2.size() + 1 , -1 )) ;
// //         K =s3 ; 
// //         a = s1 ; 
// //         b = s2 ;
// //         string ans = "" ; 
// //         return helper(0,0,ans) ;
// //     }

//     // int maximumSwap(int num) {
//     //     string s = to_string(num) ;
//     //     string r = s ; 
//     //     sort(s.begin(),s.end(),greater<char>()) ; 
//     //     int n = s.size() ; 
//     //     for(int i = 0 ; i < n ;++i){
//     //         if(s[i]!=r[i] ){
//     //             int j ;
//     //             for( j = n - 1 ; j >i ;--j ){if (r[j]==s[i])break ;}
//     //             cout<<i<< " "<<s[i]<<" " <<r[i] <<" "<<j<<endl;
//     //             swap(r[i], r[j]) ;
//     //             break ;
//     //         }
//     //     }
//     //     return stoi(r) ;
//     // }

// // void solve(){
// //     int num = 2746 ; 
// //     // num = 3235432;
// //     cout<< maximumSwap(num)<<endl;
// // }

// // vector<vector<int>> restoreMatrix(vector<int>row, vector<int> col) {
// //         int m = row.size(), n = col.size();
// //         vector<vector<int>> A(m, vector<int>(n, 0));
// //         for (int i = 0; i < m; ++i) {
// //             for (int j = 0 ; j < n; ++j) {
// //                 A[i][j] = min(row[i], col[j]);
// //                 row[i] -= A[i][j];
// //                 col[j] -= A[i][j];
// //             }
// //         }
// //         return A;
// //     }

// // void solve(){
// //     vector<vector<int>> v = restoreMatrix({5 , 7 , 10} , {8 , 6 ,8}) ; 
// //     for(int i =0 ; i < 3 ;++i){
// //         for(int j = 0 ; j < 3 ; ++j){
// //             cout<<v[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// // }

// // void solved(){
// //     string a,b,c ;
// //     a = "abaaacbacaab" ; 
// //     b = "bcccababccc" ;
// //     c = "bcccabaaaaabccaccbacabb" ;


// //     // a = "aabcc"; 
// //     // b = "dbbca";
// //     // c = "aadbbcbcac";

// //     cout <<isInterleave(a,b,c)<<endl;
// // }

// // 

// int main()
// {
//    ios_base::sync_with_stdio(false);cin.tie(NULL);
 
//    //  solve();
//    // #ifndef ONLINE_JUDGE
//    // freopen("in", "r", stdin);
//    // freopen("err", "w", stderr);
//    // freopen("out", "w", stdout);
//    // #endif

//     solve();
 
// }


// double champagneTower(int p, int i, int j) {
//         vector<double> dp(i+1); 
//         dp[0] = p ;

//         for(int k = 1 ; k <= i ;++k){
//             for(int l = k ; l >=0 ; --l ){
//                 dp[l+1] +=dp[l] = max(0.0,(dp[l] - 1)/2) ; 
//             }

//         }
//         return min(dp[j],1.0);
//     }

// // struct compare{
// //   public:
// //   bool operator()(vector<long long > &a,vector<long long> & b) // overloading both operators 
// //   {
// //       // return a.w < b.w: // if you want increasing order;(i.e increasing for maxPQ)
// //       // return a.w > b.w // if you want reverse of default order;(i.e decreasing for minPQ)

// //     return a[0] > b[0] ; 

// //    }
// // };

// // int nthSuperUglyNumber(int n, vector<int>& primes) {
// //     priority_queue<vector<long long> ,vector<vector<long long>>, compare > q ;
// //     vector<long long> nums(n) ;
// //     nums[0] = 1 ;
// //     for(int i : primes){
// //         q.push({i,i,0} );
// //     }          
// //     int j = 0  ; 
// //     for(int i = 1 ;  i < n ;){
// //         // long long [num,prime,index] = q.top() ;
// //         // if(j >10) break ; j++;cout<<j <<" ";
// //         vector<long long> v = q.top() ;
// //         q.pop();
// //         long long num = v[0] , prime = v[1] , index = v[2] ; 
// //         // cout<<i<<" "<<num<<" " <<prime<<" "<<index <<endl;
// //         if(num!=nums[i-1]){
// //             nums[i] = num ; 
// //             i++; 
// //         }
// //         q.push( { prime*nums[index+1] , prime , index + 1} );
// //     }
// //     return nums[n-1];

// // }

// // //int solve(){
// // void solve1(){
// //  int poured = 100000009, query_row = 33, query_glass = 17 ; 
// //   poured = 2, query_row = 1, query_glass = 1 ; 
// //  cout<<std::fixed <<setprecision(6)<<champagneTower(poured,query_row,query_glass)<<endl;
// // }

// // void solve2(){
// //     int n = 12 ; 
// //     vector<int> primes = {2,7,13,19} ; 

// //     n = 1000000;
// //     primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541};

// //     Show(primes);nl;
// //     cout<<"Ans "<<nthSuperUglyNumber(n,primes);nl;
// // }

// void solve3(){
//     char str[100];
//     char c[100];
//     char d[100];


//     printf("Line of text: \n\n");
//     scanf(" %[^\n]s", str);

//     printf("\nWord: \n");
//     scanf("%s", c);

//     printf("%s : %s",str,c);


//     // printf("No of occurences: %d\n", countOccurences(str, c));

//     // printf("Word to replace:\n");
//     // scanf("%s", d);

//     // char* result = NULL;

//     // result = replaceWord(str, c, d);

//     // printf("Result:\n\n");
//     // printf("%s", result);


// }


// // recursion based algorithm

// // map<string,vector<int>> mp ;

// // vector<int> f(string s){
// //     vector<int> res ;

// //     if(mp.count(s) > 0)return mp[s] ; 

// //     int n = s.size() ; 

// //     for(int i = 0 ; i < n ; ++i){
// //         char c = s[i] ; 
// //         if(c=='+'||c=='-'||c=='*'){
// //             vector<int> res1 = f(s.substr(0,i)) ; 
// //             vector<int> res2 = f(s.substr(i+1)) ; 

// //             for(auto i:res1 )
// //             {
// //                 for(auto j:res2){
// //                     if(c == '+')
// //                         res.push_back(i+j);
// //                     else if(c=='-')
// //                         res.push_back(i-j);                    
// //                     else if(c=='*')
// //                         res.push_back(i*j) ; 
// //                 }
// //             }
// //         }
// //     }

// //     if(res.empty()){
// //         res.push_back(stoi(s));
// //     }

// //     mp[s] = res ; 
// //     return mp[s] ;
// // }

// // void solve4(){

// //     string s = "2-1+1" ; 
// //     s = "2*3-4*5";
// //     mp.clear();
// //     vector<int> ans = f(s);
    
// //     Show(ans);nl;

// // }

 
// //     string simplifyPath(string path) {
// //         //first split the files 
// //         // in javascript or python this can be easily done with the split('/')
// //         string str="" ;
// //         vector<string> files;
// //         int i = 0 , n = path.size() ;
// //         for(int i = 0 ; i < n ; ++i){

// //         while(i < n && path[i]!='/'){
// //             str+=path[i++] ;
// //             cout<<i<<" "<<str<< " "<<path[i]<<endl;
// //                 }
// //         if(str.empty()||str=="." ) {str="" ;continue ; }

// //         cout<<str<<" : ";
        
// //         if(str=="..")
// //               {if(!files.empty())
// //                 files.pop_back() ;}

// //         else 
// //             files.push_back(str) ;                
        
// //         Show(files);
// //         str="";
// //         cout<<" : "<<str<<endl;
// //         // i++;
        
// //         }
// //         cout<<"Str "<<str<<endl;
        
// //         Show(files);nl;
// //         string res = "/" ;
// //         for(string s:files) res+=s + "/" ; 
// //         if(res.size() > 1 )res.pop_back();
// //         return res ; 
// //     }

// //     void solve(){
// //         string s = "/a//b////c/d//././/..";
// //         cout<<simplifyPath(s)<<endl;
// //     }

// // void solve(){
// //     // vector<vi> a= {{1,2,3,4},
// //     // {69,0,0,0,69} , 
// //     // {0 ,1,1} , 
// //     // {1,0,2,0,2,1}

// //     // };

// //     // fr(i,a.size())
// //     //  {Show(avoidFlood(a[i]));nl;}
    

// //     vi a= {1,2,3,4} ;
// //      Show(avoidFlood(a));nl;
// //     a = {69,0,0,0,69} ; 
// //      Show(avoidFlood(a));nl;
// //     a ={0 ,1,1} ;
// //      Show(avoidFlood(a));nl;
// //     a = {1,0,2,0,2,1};
// //      Show(avoidFlood(a));nl;

    

// // }