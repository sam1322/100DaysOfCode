class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int  m = grid.size() , n = grid[0].size() ; 
        vector<vector<int>> a(m,vector<int>(n)) ;
 
        for(int i = 0 ; i < k ;++i ){
        a[0][0] = grid.back().back() ;
        for(int i = 0 ; i < m ;++i){
            for(int j = 0 ; j < n ; ++j ){
                if(i==m-1 && j == n- 1)continue ;
                if(j==n-1){
                    a[i+1][0] = grid[i][j] ;  
                }
                else
                a[i][j + 1] = grid[i][j] ;
            }
        }
        grid = a ;
        }
        return grid ; 
    }
};