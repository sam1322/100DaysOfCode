class Solution {
public:
    long long maximumSubsequenceCount(string t, string p){
      long long x = 0, y =0,ans = 0;
        for(char &c:t){
            if(c==p[1]){
                ans+=x ; 
                y++; 
            }
            if(c==p[0]){
                x++ ;
            }
            
        }
        return max(x , y) + ans ;
    }
};