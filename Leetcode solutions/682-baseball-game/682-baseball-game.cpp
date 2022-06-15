class Solution {
public:
    int calPoints(vector<string>& ops) {
    vector<int> stack ;
        for(string s:ops){
            int n = stack.size() ; 
            if(s=="+" && n >= 2){
                stack.push_back(stack[n-1] + stack[n-2]) ;
            }
            else if(s=="D" && n >= 1){
                stack.push_back(2*stack[n-1] ) ;
            }
            else if(s=="C" && n > 0){
                stack.pop_back() ;
            }
            else stack.push_back(stoi(s)) ; 
            
        }
        int sum = 0 ; 
        for(int i = 0 ; i  < stack.size() ; ++i) sum+=stack[i] ;
        return sum ; 
    }
};