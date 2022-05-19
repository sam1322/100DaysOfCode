vector<int> l = { -1,0,1,0,-1} ; 
class Solution {
public:
    int n , m ,ans ; 
    vector<vector<int>> dp;
    int dfs(vector<vector<int>> &a, vector<vector<int>> &v,int x, int y ){
        if(dp[x][y] !=-1) return dp[x][y] ; 
        int mx=0, X , Y ;
        v[x][y] =1 ;
        // cout<<x<<" "<<y<<" "<<cur<<endl;
        // ans = max(ans, cur ) ; 
        for(int i = 0 ; i < 4 ;++i){
            X = x + l[i] ; 
            Y = y + l[i+1] ; 
                
            // cout<<X<<" "<<Y<<" "<<endl;
            if(X>=0 && X<m && Y>=0 && Y<n && !v[X][Y] && a[x][y] < a[X][Y] ){
               mx =max(mx,dfs(a,v,X,Y ));
            }
            
        }
        v[x][y] = 0 ; 
        dp[x][y] = mx + 1 ; 
        return dp[x][y] ; 
    }
    
//     void bfs(vector<vector<int>> &a, vector<vector<int>> &v,int x, int y, int cur )
//     {
        
//         queue<pair<int,int>> q;
//         q.push({x,y}) ; 
//         while(!q.empty()){
//             pair<int,int> p = q.front() ;
            
//         }
//     }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size() ; 
        n = matrix[0].size(); 
        ans =0 ;
        dp.assign(m,vector<int> (n,-1)) ; 
        vector<vector<int>> v(m,vector<int>(n,0));
        for(int i = 0 ; i < m ;++i){
            for(int j = 0 ; j < n ;++j ){
                ans = max(ans,dfs(matrix,v,i,j));
            }
        }
        return ans ;
    }
};