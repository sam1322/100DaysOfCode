class Solution {
public:
       int twoCitySchedCost(vector<vector<int>>& a) {
        int sum0 = 0 , sum1 = 0 , n = a.size()  ;
        
        sort(a.begin(),a.end(),[](const vector<int> A ,const vector<int> b ){
            int a1 = (A[0] - A[1]);
            int b1 = (b[0] - b[1])   ; 
            return a1 < b1 ; 
        } ) ; 
        int c1 = 0 , c2 = 0 ,ans = 0 ; 
        for(int i = 0 ; i < n ; ++i){
            cout<<a[i][0]<<" "<<a[i][1] <<" "<<ans<<endl;
            if( i < n/2 )ans+=a[i][0] ; 
            else 
                ans+=a[i][1] ; 
         
        }
        return ans ;
    }

};