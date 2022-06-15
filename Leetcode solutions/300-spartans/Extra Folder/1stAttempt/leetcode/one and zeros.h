class Solution {
public:
    vector<vector<vector<int>>> dp ;
    vector<vector<int>> v;
    int N ;
    
    int f(  int i , int m ,int n ){
        if( i >= N||m < 0 || n < 0 )return 0 ; 
        
        if(dp[i][m][n] !=-1) return dp[i][m][n] ;
        int res =0 ; 
        if(m >= v[i][0] && n >= v[i][1] ){
            res = f(i+1, m - v[i][0] , n - v[i][1] ) + 1; 
        }
        res = max(res, f(i+1,m,n) ) ;
        return dp[i][m][n] = res ;
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        N = strs.size() ; 
        dp.clear() ; 
        v.clear() ; 
        v.assign(N,vector<int>(2)) ; 
        for(int i = 0 ; i <strs.size() ; ++i ){
            for(auto y : strs[i] ){
                v[i][0] +=(y=='0') ;
                v[i][1] +=(y=='1');
            }
        }
        
        dp.assign(N + 1,vector<vector<int>>(m+1,vector<int>(n+1,-1))) ; 
        
        return f(0,m,n); 
    }
};