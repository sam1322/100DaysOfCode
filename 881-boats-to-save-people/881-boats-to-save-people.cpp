class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin() , p.end()) ; 
        int sum = 0  ,n = p.size() ; 
        for(int i = 0 , j = n- 1;  i < n && i <= j ;  ){
            if(p[i] + p[j] <= limit ){
                i++ ; 
            }
             j-- ; 
            sum++;
        }
        return sum ;
    }
};