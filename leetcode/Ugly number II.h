class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=0)return 0 ; 
        if(n==1)return 0 ; // edge cases
        vector<int> dp(n) ;
        dp[0] = 1 ;//base case 
        int t1 = 0 , t2 = 0 ,t3 = 0 ;
        for(int i=1 ; i < n ;++i){
            dp[i] = min(dp[t1]*2 ,min(dp[t2]*3 ,dp[t3]*5)) ; 
            if(dp[i]==dp[t1]*2)t1++;
            if(dp[i]==dp[t2]*3)t2++;
            if(dp[i]==dp[t3]*5)t3++;
        }
        return dp[n-1]  ; 
    }
};