class Solution {
public:
    vector<vector<int>> res; 
    
    void f(int n, int k ,vector<int> &v ,int i ){
        // cout<<n<<" "<<k<<" "<<i<<endl;
        if(n==0 && k ==0){
            res.push_back(v); 
            return ; 
        }
        if(i > 9 )return  ; 
        
        // if(k==0)return; 
        v.push_back(i) ; 
        f(n-i,k-1,v,i+1) ; 
        v.pop_back() ;
        f(n,k,v,i+1) ; 
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v;     
        f(n,k,v,1) ; 
        return res ;
    }
};