class Solution {
public:
    vector<string> v = { "" , "" , "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"} ;
        vector<string> ans; 
    
    void helper(string digits,string &cur){
        if(digits.empty()){
            if(!cur.empty())
            ans.push_back(cur) ; 
            return ; 
        }
        
        for(char x :v[digits[0]-'0']){
            cur.push_back(x) ; 
            helper(digits.substr(1),cur) ; 
            cur.pop_back() ; 
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        string cur="" ;
        helper(digits,cur) ;
        return ans ;
    }
};