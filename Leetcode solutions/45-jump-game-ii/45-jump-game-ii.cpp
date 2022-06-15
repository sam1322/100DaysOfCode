class Solution {
public:
    int jump(vector<int>& nums) {
        
        int ans = 0  , n = nums.size() , mx = 0 , cur = 0 ; 
        for(int i = 0 ; i < n - 1 ; ++i ){
            cur = max(cur, i + nums[i]) ; 
            if(i == mx){
                ans++ ;
                mx = cur ; 
            }
        }
        return ans ;
    }
};