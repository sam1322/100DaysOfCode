vector<int> v = { -1 , 0 , 1 , 0 , -1 , 1 , 1 , -1, -1} ; 
class Solution {
public:
    
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size() ;
        int a,l,k,n = board[0].size() ; 
        for(int i = 0; i  < m ;++i ){
            for(int j = 0 ; j < n ;++j ){
                a = 0 ;
                for(int y = 0; y < v.size() - 1 ; ++y ){
                    l = i + v[y] ; 
                    k = j + v[y+1] ; 
                    if(l>=0 && l<m && k>= 0 && k < n && (board[l][k]&1) == 1)a++;
                }
                if(board[i][j]==1){
                    if(a==2||a==3)
                        board[i][j] |=2 ;
                    
                }
                else if(a==3){
                    board[i][j] |=2 ;
                }
                
            }
        }
        for(int i = 0 ; i  < m ;++i){
            for(int j = 0 ; j < n ; ++j ){
                board[i][j] >>=1; 
            }
        }
        // return board ;
    }
};