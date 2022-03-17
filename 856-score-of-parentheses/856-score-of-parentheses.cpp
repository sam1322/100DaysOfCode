class Solution {
public:
    int scoreOfParentheses(string s) {
        int cur = 0 ;
        vector<int> v; 
        for(char c : s){
            if(c=='('){
                v.push_back(cur) ; 
                cur = 0 ; 
            }
            else {
                cur = v.back()  + max(cur*2,1 ) ;
                v.pop_back() ;
            }
        }
        return cur ; 
    }
};