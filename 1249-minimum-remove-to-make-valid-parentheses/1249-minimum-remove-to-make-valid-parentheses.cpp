class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size() ; 
        vector<bool> ok(n,true); 
        vector<int> stack ;
        for(int i = 0 ; i < n ;++i) {
            if(s[i] == '('){
                stack.push_back(i) ;
            }
            else if(s[i]==')'){
                if(stack.empty()){
                    ok[i] = false; 
                }
                else{
                    stack.pop_back() ; 
                }
            }
        }
        while( !stack.empty()){
            ok[stack.back()] = false ;
            stack.pop_back() ; 
        }
        string str = "" ;
        for( int i = 0 ; i < n ;++i ){
            if(ok[i]){
                str+=s[i] ; 
            }
        }
        return str ;
    }
};