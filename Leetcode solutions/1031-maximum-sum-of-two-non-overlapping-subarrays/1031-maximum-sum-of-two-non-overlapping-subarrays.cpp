class Solution {
public:
    int f(vector<int>&nums,int l, int m ){
        int n = nums.size(); 
        vector<int> prefix(n+1) ; 
        for(int i = 0 ; i < n ;++i){
            prefix[i+1] = prefix[i]  + nums[i] ; 
        }
        int maxL = 0 , ans = 0 ; 
        for(int i = l + m ; i <= n ;++i ){
            maxL = max(maxL , prefix[i-m]-prefix[i-l-m]) ; 
            ans = max(ans , maxL + prefix[i] -prefix[i-m]);
        }
        return ans;
    }
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
    return max(f(nums,firstLen,secondLen),f(nums,secondLen , firstLen)) ; 
    }
};