class Solution {
public:
    vector<int> countRectangles(vector<vector<int>>& rect, vector<vector<int>>& p)      {
        map<int,vector<int>> mp ;
        for(auto i:rect){
            mp[i[1]].push_back(i[0]);
        }
        for(auto &x :mp){
            sort(x.second.begin(),x.second.end());
        }
        vector<int> v ;
        for(auto i:p){
            int x = i[0] , y = i[1] , ans = 0 ;
            for(auto &k : mp){
                vector<int> &r = k.second ; 
                if(k.first < y){
                    continue; 
                }
                int pos =  upper_bound(r.begin(),r.end(),x) -r.begin() ;
                if(pos!=0 && r[pos-1] >=x ){pos--;}
                ans += r.size() - pos; 
                
            }
            v.push_back(ans);
        }
        
        return v ;
           
    }
};
