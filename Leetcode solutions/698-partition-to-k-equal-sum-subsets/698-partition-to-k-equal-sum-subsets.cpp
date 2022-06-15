class Solution {
public:
    
    unordered_map<int,int> mp ;
    bool f(vector<int> &arr,vector<int> &subset,int vis,int sum,int k, int n, int ind, int end ) {
        if(mp.count(vis) )return mp[vis] ; 
        if(subset[ind]==sum){
            if(ind == k -2 ){
                return true ; 
            }
            return mp[vis] = f(arr, subset,vis,sum,k,n,ind + 1, n-1) ;
        }
        for(int i = end ; i >= 0 ; --i){
            if(vis & (1<<i))continue ;
            int t = subset[ind] + arr[i] ; 
            if(t <= sum ){
                vis |= (1<<i)  ; 
                subset[ind]+=arr[i] ;
                bool nxt = f(arr,subset,vis,sum,k,n,ind , i - 1 ) ;
                vis^=(1<<i) ;  
                subset[ind]-=arr[i] ;
                if(nxt)return mp[vis] =  true ;
            }
        }
        return mp[vis] =  false;
    }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n = nums.size() ; 
        if(k==1 )return true ; 
        if(n < k )return false ; 
        int sum = 0 ; 
        for(int i = 0 ; i < n ;++i ){
            sum+=nums[i] ; 
            
        }
        if(sum%k)return false ; 
        mp.clear() ; 
        vector<int> subset(k);
 
        return f(nums,subset,0,sum/k,k,n,0,n-1) ;
        
    }
};