class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,long long> mp ; 
        for(int i : arr){
            mp[i]++;
        }
        
        // vector<pair<int,int>> v(mp.begin() ,mp.end()) ;
        
    
        long long ans = 0; 
        for(auto [i,u]:mp){
            for(auto [j,v]:mp){
                int k = target - i - j ; 
                if(mp.count(k)==0)continue ;
                
                if(i==j && j==k){
                    ans+=((mp[k])*(mp[k]-1)*(mp[k]-2))/6; 
                }
                else if(i==j && j!=k){
                    ans+=(((u*(u-1))/2)*(mp[k])) ;
                }
                else if(i <j && j < k ){
                    ans+=(u*v*mp[k]); 
                }
                
            }
            
        }
        
        return ans % int(1e9+ 7);
    }
};