class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long i = 0 , ans = 0 , a = 1 ;
        while(a <= n){
            if(i < nums.size() && nums[i]<=a){
                a+=nums[i++]; 
            }
            else{
                ans++;
                a+=a;
            }
        }
        return ans ;
    }
};