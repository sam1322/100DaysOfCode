class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> a(n,vector<int>(n)) ;
        int r1 = 0 , r2 = n- 1;
        int c1 = 0 , c2 = n - 1; 
       int ind = 0 ;
        while( r1 <= r2 && c1 <= c2){
            for(int i = c1 ; i <= c2 ;++i){
                a[r1][i] = ++ind;
                
            }
            
            for(int i = r1 + 1  ; i <= r2 ; ++i){
                a[i][c2] = ++ind; 
            }
            if(r1 < r2 && c1 < c2 ){
            for(int i = c2 - 1 ; i >c1 ;--i ){
                a[r2][i] = ++ind;
            }
            
            for(int i = r2 ; i > r1 ; --i){
                a[i][c1] = ++ind;
            }

            }
            ++r1 ;
            --r2 ; 
            c1++; 
            c2--;
        }
        return a;
    }
};