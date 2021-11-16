class Solution {
public:
    int n , ans  ,t;
    unordered_map<string,int> mp; 
    
    int f(int i , int cur ,vector<int> &nums ){
        if(i == n && cur == t)
            {return 1;} 
        if(i == n)return 0 ;  // base class 
        string s = to_string(i) +'$' + to_string(cur) ; 
        if(mp.count(s) > 0  )return mp[s] ;
        
        mp[s] +=f(i+1,cur+nums[i] , nums ) ;
        mp[s] +=f(i+1,cur-nums[i] , nums ) ;
        
        return mp[s] ;
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        ans= 0;
        n = nums.size() ; 
        mp.clear() ; 
        t=target ; 
        return f(0,0,nums) ; 
    }
};