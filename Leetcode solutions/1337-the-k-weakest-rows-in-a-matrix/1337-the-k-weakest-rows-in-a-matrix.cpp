struct compare{
  public:
  bool operator()(vector<int > &a,vector<int> & b) // overloading both operators 
  {
      // return a.w < b.w: // if you want increasing order;(i.e increasing for maxPQ)
      // return a.w > b.w // if you want reverse of default order;(i.e decreasing for minPQ)

         
    return a[0] > b[0] ; 

   }
};
class Solution {
public:
     vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    // priority_queue<vector<int> , vector<vector<int>> , compare> q ; 
    vector<int> ans; 
    int n = mat.size() ; 
    if(n==0||k==0)return ans; 
    vector<vector<int>> v ;
    int m = mat[0].size() ; 
    for(int i = 0 ; i < n ; ++i ){
        int c =0 ;
        for(int j = 0 ; j < m ; ++j ){
            if(mat[i][j]==0){
                // q.push({c,i}) ; 
                
                break ; 
            }
            c++ ; 
        }
        v.push_back({c,i}) ; 
        
        
    }
    // int l = 0 ; 
    // while(!q.empty() && k-- ){
    //     vector<int>  V = q.top() ; 
    //     // cout<<"index "<< l++ <<" ";
    //     // Show(V);nl ; 
    //     ans.push_back(V[1]) ; 
    //     q.pop() ; 
    // }
    
    sort(v.begin() , v.end() , [](vector<int> &a, vector<int>& b){
        if(a[0] == b[0] ){
            return a[1] < b[1] ; 
        }
        return a[0] < b[0] ; 
    });
         
    for(int i = 0; i < k && i < n ;++i){
        ans.push_back(v[i][1]) ; 
    }
         
 
    return ans ;
}
};