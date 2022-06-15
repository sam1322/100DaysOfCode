class Solution {
public:
    long long numberOfWays(string s) {
        // vector<int> zero ,one ;
        long long c = 0, d= 0, ans = 0, a = 0 , b= 0;
        for(char C:s){
            if(C=='1')a++;
            else b++;
        }
        
        for(char ch:s){
            if(ch=='1'){
                ans+=(d*b) ; 
                a--;
                c++;
            }
            else{
                ans+=(c*a) ;
                b--;
                d++;
            }
        }
        return ans ;
    }

};