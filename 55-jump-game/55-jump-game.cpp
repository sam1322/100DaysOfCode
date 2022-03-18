class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = 0 ;
        int n = nums.size() ;
        for(int i = 0 ;i < n ;++i){
            if(i>mx){
                break ; 
            }
            mx = max(mx, i + nums[i] ) ; 
        }
        return mx >= n -1 ;
    }
};