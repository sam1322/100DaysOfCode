class Solution {
public:
    int numberOfSteps(int num) {
        int sum = 0 ; 
        while(num > 0 ){
            if(num&1)num--;
            else num>>=1;
            sum++;
            
        }
        return sum ;
    }
};