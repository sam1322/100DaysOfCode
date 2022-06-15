class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> dp(5,1); 
        int sum = 5,t ,cur ;
        for(int i = 1 ; i < n ;++i ){
            cur = 0 ;
            for(int j = 0 ; j < 5 ; ++j ){
                t = dp[j] ;
                dp[j]=sum ;
                sum-=t ; 
                cur +=dp[j] ; 
            }
            
            sum = cur ; 
        }
        return sum ; 
    }
};