class Solution {
public:
    
    int splitArray(vector<int>& nums, int m) {
        int minval = nums[0] , maxval = 0  ;
        for(int i :nums){
            minval = min(minval , i) ;
            maxval += i ;
        }
        while( minval < maxval){
            int mid = minval + (maxval - minval)/2 ; 
            if(check(nums,mid,m)){
                maxval = mid ; 
            }
            else minval = mid +1  ;
            cout<<minval<<" "<<maxval<<endl;
        }
        return minval ; 
    }
    
    bool check(vector<int> &a, int sum , int m ){
        int c = 0 , n = 1;
        for(int i : a){
            c += i ;
            if(c > sum ){
                n++; 
                c = i ; 
                if(n > m || i >sum)return false; 
            }
        }
        return true ;
    }
};