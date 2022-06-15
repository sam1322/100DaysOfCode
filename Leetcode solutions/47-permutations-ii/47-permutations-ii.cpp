class Solution {
public:
    int n ;
    void f(vector<int> nums,int i , vector<vector<int>> &res){
        if(i==n-1){
            res.push_back(nums);
            return ;
        }
        for(int k = i ; k < n ;k++){
            if( i!=k && nums[i]==nums[k])continue ;
            swap(nums[i],nums[k]);
            f(nums,i+1,res);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res ; 
        n = nums.size() ; 
        sort(nums.begin() ,nums.end()); 
        f(nums,0,res);
        return res ;
    }
};