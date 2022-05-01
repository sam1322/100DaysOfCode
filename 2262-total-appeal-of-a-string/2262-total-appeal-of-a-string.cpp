class Solution {
public:
    long long appealSum(string s) {
        vector<int> v(26,-1);
        long long n = s.size()  , ans = 0  , cur = 0; 
        
        for(int i= 0 ; i < n ;++i){
            int ind = s[i] - 'a' ; 
            if(v[ind]==-1){
                cur +=i + 1; 
            }
            else{
                cur +=(i - v[ind]) ;    
            }
                v[ind] = i ;
                ans +=cur ;
            // cout<<ans<<" "<<cur<<" "<<ind<< " " <<v[ind]<<endl;
            
        }
        return ans ;
    }
};