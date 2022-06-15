class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="", b="";
        for(char i:s){
            if(i!='#'){
                a+= i;
            }
            else if(!a.empty() ){
                a.pop_back() ; 
            }
        }
        for(char i:t){
            if(i!='#' ){
                b+=i;
            }
            else if(!b.empty()) {
                b.pop_back();
            }
        }
        return a == b ; 
    }
};