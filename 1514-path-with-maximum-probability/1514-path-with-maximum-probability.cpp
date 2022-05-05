struct compare{
    bool operator()(const pair<double,int> &a,const pair<double,int> &b){
        return a.first > b.first ;
    }
};

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>>  adj(n) ;
        
        for(int i = 0 ; i < edges.size() ; ++i){
            int u = edges[i][0] , v = edges[i][1] ;
            double w = succProb[i] ;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
            
        }
        
        priority_queue<pair<double,int>> q;
        // priority_queue<pair<double,int> ,vector<pair<double,int>> ,compare> q;
        vector<double> dist(n,0.00);
        vector<int> vis(n);
        dist[start] = 1.00 ; 
        q.push({1.0,start});
        while(!q.empty()){
            pair<double,int> p = q.top() ;
            q.pop(); 
            double wt = p.first ; 
            int u = p.second; 
            if(vis[u])continue; 
            vis[u] = 1;
            
            // if(wt < dist[u])continue ;
             
            for(auto x: adj[u]){
                double d = x.second*wt;
                // cout<<d<<" "<<endl;
                
                int v = x.first ; 
                if( d > dist[v]){
                    dist[v] = d; 
                    q.push({d,v});  
                }
            }
            
        }
        
        return dist[end] ;
        
    }
};