class Solution {
public:
    int ans ;
    int n ; 
    
    void dfs(vector<vector<int>> &grid,vector<vector<int>> &vis,int x ,int y ,int c ){
        if(x==n-1 && y== n- 1){
            if(ans == -1 )ans = c; 
            ans = min(ans,c);
            return ;
        }
        // cout<<x<<" "<<y<<endl;
        vis[x][y] = 1 ;
        for(int i = -1 ; i<=1 ;++i){
            for(int j = -1; j <= 1 ;++j){
                if(i==0 && j ==0)continue;
                int l = x + i , k = y + j ;
                if( l>=0 && l < n && k >= 0 && k < n && !vis[l][k] && !grid[l][k]){
                    dfs(grid,vis,l,k,c+1); 
                    
                }
            }
        }
        vis[x][y] = 0 ;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        ans = -1; 
        if(grid[0][0])return -1;
        n = grid.size() ; 
        vector<vector<int>> vis(n,vector<int>(n)) ;
//         dfs(grid,vis,0,0,1);
        
//         return ans; 
//     }
        int c= 1;
        queue<pair<int,int>> q; 
        q.push({0,0}) ; 
        vis[0][0] = 1; 
        while(!q.empty()) {
            int N = q.size() ; 
            for(int I= 0 ;I <N ;++I){
                pair<int,int> cur = q.front(); 
                q.pop(); 
                int x =cur.first , y  = cur.second; 
                if(x==n-1 && y == n - 1)return c ; 
                for(int i = -1 ; i<=1 ;++i){
                    for(int j = -1; j <= 1 ;++j){
                        if(i==0 && j ==0)continue;
                        int l = x + i , k = y + j ;
                        if( l>=0 && l < n && k >= 0 && k < n && !vis[l][k] && !grid[l][k]){
                            vis[l][k] = 1;
                            q.push({l,k}) ; 
                        }
                    }
                }    
            }
c++ ;
        }
        return -1 ; 
    }
};