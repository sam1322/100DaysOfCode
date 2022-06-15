class Solution {
public:
    bool check(string  &a,string &b){
        int i = 0 ,f= 0 , j = 0 , n =a.size() ;
        while(i < n){
            if(a[i] == b[j]){
                i++;j++;
                
            }
            else if(f)return false; 
            else {f++;j++;}
        }
        return true ;
    }
    int longestStrChain(vector<string>& words) {
        map<int,vector<string>> mp;
        map<string,int>m ;
        int ans= words.empty() ? 0 :1  ; 
        for(string w:words){
            int n = w.size() ; 
            mp[n].push_back(w);
            m[w] = 1 ;
        }
        for(int i = 1; i <16;++i){
            for(string x:mp[i]){
                for(string y:mp[i+1]){
                    if(check(x,y)){
                        m[y]=max(m[y], m[x] + 1);
                        ans = max(ans,m[y]) ; 
                    }
                }
            }
        }
        return ans ;
    }
};