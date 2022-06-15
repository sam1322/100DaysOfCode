class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
    
      unordered_set<string> st; int x =  0 , n = nums.size(); 
        for(int i = 0 ;  i < n ;++i){
            for(int len = i; len <= n ;++len ){
                int x = 0 ,f = 1;
                string s = "" ; 
                for(int j = i ; j < len ; ++j ){
                    if(nums[j]%p==0)x++;
                    if(x > k ){
                        f = 0 ; 
                        break ; 
                    }
                    // s+=to_string(nums[j])+"#" ;
                    s.push_back(nums[j]);
                }
                // cout<<i<<" : "<<i + len<<" ; "<<s<<endl;
                if(f && !s.empty()) 
                st.insert(s) ; 
            }
        }
        return st.size() ;
    }
};