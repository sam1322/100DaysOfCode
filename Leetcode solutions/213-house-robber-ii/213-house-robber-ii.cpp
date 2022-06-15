class Solution {
public:
    int rob(vector<int>& nums) {
        int  n = nums.size() ; 
        if(n==1)return nums[0] ; 
        if(n==2)return max(nums[0],nums[1]); 
        int a =nums[0] ,b= max(nums[0],nums[1]) ,c=b,d ;
        for(int i = 2 ;i < n - 1; ++i){
            c = max(a + nums[i] ,b); 
            a = b; 
            b = c ;
        }
        a = nums[1] ;
        b = max(a,nums[2]) ; 
        d=b ;
        for(int i = 3 ;i < n ; ++i){
            d = max(a + nums[i] ,b); 
            a = b; 
            b = d ;
        }
        return max(c,d);
    }
    
};