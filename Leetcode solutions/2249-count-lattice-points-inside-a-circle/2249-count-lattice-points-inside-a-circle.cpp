class Solution {
public:
        set<pair<int,int>> st; 
    
    void f(int a, int b, int r){
        for(int x = -r ; x <=r ; ++x){
            for(int y = -r ; y <= r ;++y){
                if(x*x + y*y <= r*r ){
                    st.insert({x+a,y+b}) ; 
                }
            }
        }
    }
    
    int countLatticePoints(vector<vector<int>>& circles) {
        st.clear() ; 
        for(vector<int> v:circles){
            f(v[0],v[1],v[2]) ;
        }
        return st.size() ;
    }
};