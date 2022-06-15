class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end()) ; 
        int  n =  nums.size()  ;
        vector<int> vis(n) ; 
        int ans = 0 ;
        for(int i = 0; i < n-1 ;++i){
            if(vis[i])continue;
            int t = k - nums[i] ;
            int p = lower_bound(nums.begin() + i + 1, nums.end() ,t ) - nums.begin();
            while( p < n && nums[p] == t && vis[p] )p++;
            if(p >= n || nums[p] != t || vis[p])continue;
            vis[p] = 1;
            // cout<<i<<" "<<p<<endl;
            ans++ ;
        }
        return ans ;
    }
};