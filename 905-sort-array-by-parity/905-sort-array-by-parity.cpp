class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size() ;// inplace soln by lee215 
        for(int i = 0  ,j = 0 ; j< n ;++j ){
            if(nums[j]%2==0)swap(nums[i++],nums[j]) ; 
        }
    return nums;
    }
};