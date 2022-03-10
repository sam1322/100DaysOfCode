class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int temp , pref = nums[0] , n = nums.size();
        
        vector<int> suf(n) ; 
        
        suf[n-1] = nums[n-1] ;

        for(int i = n-2 ; i >0  ; --i){
            suf[i]= suf[i+1] * nums[i] ;                                     
        }
        
        nums[0] = suf[1] ; 
        
        for(int i = 1 ; i < n - 1 ;++i ){
           temp = nums[i] ;
            nums[i] = pref*suf[i+1] ; 
            pref*=temp ; 
        }
        nums[n-1]=pref;
        return nums;
    }
};