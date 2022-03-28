class Solution {
public:
    vector<int> ans ; 
    int target = 0 ; 
    vector<int> maximumBobPoints(int numArrows, vector<int>& aliceArrows) {
        vector<int> res(12,0); 
        f(aliceArrows,numArrows,11, 0 ,res); 
        return ans ;
    }
    
    void f(vector<int> &a , int n , int i , int sum , vector<int> &res){
        if( i < 0 || n <=0 ){
            if(sum > target ){
                target = sum ; 
                if(n >0 )res[0]+=n;
                ans = res ;
            }
                return ;
        }
        
        int req = a[i] + 1;
        if( req <= n){
            res[i] = req ; 
            f(a,n - req , i -1 , sum+i,res) ; 
            res[i] = 0 ;
        }
        f(a,n,i - 1,sum,res) ;
        return;
    }
};