class Solution {
public:
    string s; 
    int ans ; 
    vector<vector<int>> adj;
    
    int dfs(int u){
        int a = 0 , b = 0 ; 
        for(int v:adj[u] ){
            int c =dfs(v); 
            if(s[u]==s[v])continue ;
            if(a < c){
                b = a; 
                a = c; 
            }
            else {
                b = max(b,c);
            }
        }
        ans = max(ans , a+b + 1) ; 
        return a + 1;
    }
    int longestPath(vector<int>& parent, string S) {
        int n = parent.size() ;
        ans= 0 ;
        s = S; 
        adj.resize(n+1,vector<int>()) ;
        for(int i = 1 ; i < n ;++i ){
            adj[parent[i]].push_back(i) ;
        }
        
        return max(dfs(0),ans);
        
    }
};