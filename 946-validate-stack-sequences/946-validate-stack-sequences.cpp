class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        vector<int> stack; 
        int n = pushed.size() ; 
        int m = popped.size() ; 
        int j = 0 ; 
        for(int i = 0 ; i < n ; ++i ){
            stack.push_back(pushed[i]); 
            while(!stack.empty() && stack.back() == popped[j] ){
                stack.pop_back() ; 
                ++j ;
            }
        }
        while(!stack.empty() && j < m ){
            if(stack.back()!=popped[j])return false ;
            stack.pop_back() ;
            j++;
        }
        if(stack.empty())return true ;
        return false; 
    }
};