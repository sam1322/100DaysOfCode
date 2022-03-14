class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> mp(26,-1) ;
        int n = s.size() ;
        for(int i = 0 ; i < n ;++i){
            mp[s[i] - 'a'] = i ;
        }
        int l = 0 , mx  = -1 ; 
        vector<int> v; 
        for(int i = 0 ; i < n ; ++i ){
            mx = max(mx,mp[s[i]-'a'] ); 
            if(i>=mx){v.push_back(i-l+1) ; l = i + 1; mx = l; }
            
        }
        return v; 
    }
};