class Solution {
public:
    int minDominoRotations(vector<int>& top, vector<int>& bottom) {
        unordered_map<int,int> mp ; 
        int n = top.size()  ,ans = 0 ;
        vector<int> v(7,-1) ; 
        for(int i = 0 ; i < n ;++i ){
            if(v[top[i]]+1==i)v[top[i]] = i ;
            if(v[bottom[i]]+1==i)v[bottom[i]] = i ;
        }
        int ind = - 1; 
        for(int i = 1 ; i <= 6 ;++i){
            if(v[i]==n-1){
                ind = i  ; 
                break ; 
            }
        }
        if(ind == -1)return -1 ;
        int t = 0 , b = 0 ; 
        for(int i = 0 ; i < n ; ++i ){
            if(top[i]==ind && bottom[i]!=ind){
                b++ ;
            }
            if(top[i]!=ind && bottom[i]==ind){
                t++ ;
            }
        }
        return min(t,b) ;
    }
};