class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum = 0 , mid ,l = 0 , r = 10000000 ; 
        while(l < r){
             mid = (l + r + 1) /2; 
             sum = 0 ;
            for(int i :candies){
                sum+=i/mid ; 
            }
            if(k>sum)r = mid - 1; 
            else
                l = mid ; 
        }
        return l ; 
    }
};