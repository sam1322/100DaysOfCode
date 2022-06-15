class Solution {
public:
    vector<string> ans ;
    int max ;
    vector<string> generateParenthesis(int n) {
        ans.clear() ;
        max = n ;
        helper("" , 0,0); 
        return ans ;
    }
    
    void helper(string s , int open, int close){
        if( s.size() == max*2){
            ans.push_back(s) ; 
            return ; 
        }
        if(open < max && open >= close) {
            helper(s + '(' , open + 1 , close ) ;
        }
        if(close < max && close <= open){
            helper(s + ')' , open, close + 1  ) ;
        }
    }
};