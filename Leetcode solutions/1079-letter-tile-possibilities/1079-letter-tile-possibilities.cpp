class Solution {
public:
    void f(vector<int> &count,int &res){
        for(int i =  0 ; i < 26 ;++i ){
            if(count[i]){
                count[i]--; 
                res++;
                f(count,res);
                count[i]++;
            }
        }
    }
    
    int numTilePossibilities(string tiles) {
        vector<int> count(26); 
        for(char ch:tiles) 
           count[ch-'A']++;
        int res = 0 ;
        f(count,res); 
        return res ;
        
    }
};