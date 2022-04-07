class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0 , c = 0 ;
        for(char ch:s){
            if(ch == '('){
                c++;
            }
            else{
                if(c > 0)
                c--;
                else ans++ ;
            }
        }
        ans+=c ;
        return ans; 
    }
};