class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> vis(n,0);
        int c = 0 , j = 0  ;
        while(c < n -1){
            c++;
            for(int i = 0 ; i < k - 1 ;){
                if(vis[j]){
                j = ( j + 1)% n ; 
                    continue ;}
                else {j = ( j + 1)% n ; 
                i++;}
                // cout<<j<<" ";
            }
               while(vis[j]){
                j = ( j + 1)% n ;    
            }
            vis[j] = 1 ;
            while(vis[j]){
                j = ( j + 1)% n ; 
                
            }
            // cout<<"Next "<<j  <<endl;
                
        }
        return j + 1 ;
    }
};