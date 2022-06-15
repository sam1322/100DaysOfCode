class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size() , maxSize =  0;
        string maxstr = "" ; int maxlen = 0 ; 
        for(int i = 0 ; i < n  ;++i)
        {//odd no strings 
            int x = 0 ;
            while( i-x >=0 && i+x < n && s[i-x]==s[i+x]){
                x++;
            }
            if(2*x - 1 > maxlen){
                maxlen = 2*x - 1 ;
                maxstr = s.substr(i-x+1,2*x - 1) ;
            }
      //even no strings 
             x = 0 ;
            while( i-x >=0 && i+x+1 < n && s[i-x]==s[i+x+1]){
                x++;
            }
            if(2*x  > maxlen){
                maxlen = 2*x  ;
                maxstr = s.substr(i-x+1,2*x ) ;
            }
        }
        
        return maxstr ; 
    }
};