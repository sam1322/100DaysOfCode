class Solution {
public:
    unordered_map<int,int> mp ; 
    int f(vector<int>&a, int t ){
        if(t < 0 )return 0 ;
        if(t == 0)return 1 ;
        if(mp.count(t))return mp[t] ; 
        int res = 0 ;
        for(int i = 0 ; i < a.size() ; ++i ){
            res +=f(a,t - a[i] ) ;
            
        }
        return mp[t] = res ; 
        
    }
    int combinationSum4(vector<int>& nums, int target) {
 
        mp.clear() ;
        int cur  = 0 ; 
        return f(nums,target ) ; 
     }
};