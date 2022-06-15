vector<int> moves = { -1, -2, -1, 2, 1, -2, 1, 2, -1 } ;
class Solution {
public:
    unordered_map<int, unordered_map<int, unordered_map<int, double>>>dp;

    int l,m, N ,ans, K;
    bool check(int r,int c){
        return r>=0 && r<N && c >= 0 && c <N ;
    }
    double rec(int r ,int c ,int k ){
        if(dp.count(r) && dp[r].count(c) && dp[r][c].count(k)) return dp[r][c][k];
        
        if(!check(r,c))return 0 ;
    
        if(k== 0){
            return 1.0;
        }
        double x = 0 ;
        for(int i = 0 ;i < 8;++i){
            l = r + moves[i] ; 
            m = c + moves[i+1] ;
            
            x+= 0.125*rec(l,m,k-1) ;
        }
        return dp[r][c][k] = x ;
    }
    double knightProbability(int n, int k, int row, int column) {
        N = n ; 
        ans = 1;
        K = 1 ; 
        dp.clear() ;
        return rec(row,column,k); 
           
    }
};