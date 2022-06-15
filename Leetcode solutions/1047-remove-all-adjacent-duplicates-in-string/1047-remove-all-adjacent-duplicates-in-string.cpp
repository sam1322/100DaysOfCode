class Solution {
public:
    string removeDuplicates(string s) {
        int j,i, n = s.size() ; 
        for(j=0, i =0  ; j < n ; ++i ,j++){
            s[i]=s[j] ; 
            if(i > 0 && s[i]==s[i-1]){
                i-=2 ;
            }
        }
        return s.substr(0,i);
    }
};