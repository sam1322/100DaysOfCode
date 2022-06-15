class Solution {
public:
    int countCollisions(string d) {
        int l , r , s , ans = 0 , n = d.size() ;
        l = r = s = 0 ; 
        for(int i = 0 ; i <  n; ++i ){
            if(i < n -1 && d[i]=='R' && d[i+1]=='L'){
                ans+=2 ;
                s++;
                i++;
                if( r  > 0 )ans+=r ; 
                r = 0 ; l = 0 ;
            }
            else if(d[i]=='R'){
                r++ ; 
            }
            else if(d[i]=='S'){
                ans+=r ; s++;
                r=0 ;
            }
            else if(s > 0 )ans++ ; 
        }
        return ans  ;
    }
};