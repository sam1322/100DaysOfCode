class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> mp(26) ;
        int n = s.size() ; 
        for(int i = 0 ; i < n ; ++i ){
            mp[s[i]-'a']++;
        }
        vector<int> vis(26) ;
        string res = "" ; 
        for(char c: s){
            int ind = c - 'a' ; 
            mp[ind]--;
            if(vis[ind]){continue ; }
            while(!res.empty() && res.back() >= c  && mp[res.back() - 'a'] >= 1 ){
                // mp[res.back() - 'a']--; 
                vis[res.back() - 'a'] = 0 ;
                res.pop_back() ; 
            }
            vis[ind] = 1 ;
            res+=c ; 
        }
        return res ; 
    }
};