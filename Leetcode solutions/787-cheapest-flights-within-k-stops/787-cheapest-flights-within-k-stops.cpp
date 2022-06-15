class Solution {
public:
    int inf = 0x3f3f3f3f;
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> prices(n,inf),temp ;
        // vector<vector<vector<int>>> g(n);
        // for(auto x:flights){
        //     int u = x[0] , v = x[1] , w = x[2] ;
        //     g[u].push_back({v,w});
        // }
        prices[src]=0;
        for(int i = 0 ; i <min(k+1,n-1) ; ++i){
        temp = prices ;
          
            for(auto x:flights){
            // while(level <= k && !q.empty()){
                int u = x[0] ; 
                int v = x[1] ; 
                int w = x[2] ; 
                if(temp[u]==inf)continue; 
                 w += prices[u] ; 
                if(w < temp[v]){
                    temp[v] = w ;
                    // q.push(v); 
                }
                // level++;
                
            }
            prices = temp ;
        }
        for(int i = 0 ; i < n ; ++i )cout<<prices[i]<<" ";
        cout<<endl;
        
        return (prices[dst] == inf) ? -1 : prices[dst] ; 
        
    }
    
};