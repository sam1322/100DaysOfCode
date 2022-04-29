class Solution {
public:
    bool bfs(vector<vector<int>> &graph,int u ){
        int n = graph.size() ;
        vector<int> level(n),vis(n);
        queue<int> q;
    
        // while( u < n && graph[u].empty())u++;
        // if(u==n)return true;
        q.push(u);
        while(!q.empty() ){
            u = q.front();
            q.pop() ;
            // cout<<u<<endl;
            for(int v :graph[u]){
                if(!vis[v]){
                    level[v]=!level[u] ;
                    vis[v] =1; 
                    q.push(v); 
                }
                else if(level[u]==level[v])return false; 
                
            }
        }
        return true; 

    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        bool ans = true ;
        for(int i = 0 ; i < graph.size() ;++i){
            ans = ans && bfs(graph,i);
        }
        return ans;
    }
};