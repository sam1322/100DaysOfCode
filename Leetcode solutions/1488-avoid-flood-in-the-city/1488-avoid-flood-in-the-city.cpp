class Solution {
public:
vector<int> avoidFlood(vector<int> &rains) {
        unordered_map<int,int>mp ; 
        set<int>st  ;
        int n = rains.size() ; 
        vector<int> ans(n,-1) ;
        for(int i = 0 ; i < n ; ++i ){
            if(rains[i] > 0 ){
                int lake = rains[i]  ;
                if(mp.count(lake)> 0 ){
                    auto it = st.upper_bound(mp[lake]) ; 
                    if(it!=st.end()){
                        ans[*it ] = lake ; 
                        st.erase(it); 
                    }
                    else{
                        return {} ; 
                    }
                }

                mp[lake] = i ; 
            }
            else {
                st.insert(i);
                ans[i] = 1 ;
            }

        }
        return ans ; 
    }
};