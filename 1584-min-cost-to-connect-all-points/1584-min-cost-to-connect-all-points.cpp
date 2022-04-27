struct  compare
{
    // queue elements are vectors so we need to compare those
    bool operator()(std::vector<int> const& a, std::vector<int> const& b) const
    {   
        return a[0] > b[0];
    }
};

class Solution {
public:
    vector<int> par;
    int dist(vector<int> &p1,vector<int> &p2){
        return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1]) ; 
    }
    
    int find(int u){
       if(par[u] == -1)return u ;
        par[u] = find(par[u]) ;
        return par[u];
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size() ;
        vector<bool> vis(n) ;
        par.assign(n,-1);
        
        int ans  = 0 ;
        priority_queue<vector<int>,vector<vector<int>> , compare> q; 
        for(int i = 0 ; i < n  ;++i)
            for(int j = i+1 ; j < n;++j) 
                q.push({dist(points[i],points[j]),i,j});
             
        for(int i = 0 ; i < n  - 1; ){
            vector<int> V = q.top(); 
            q.pop() ; 
            int dist = V[0] , u = V[1] , v = V[2] ;
            int a= find(u) , b = find(v);
            if(a==b)continue ;
            i++;
            cout<<a<<" "<<b<<endl;
            if(a<n && a>=0)
            par[a] = b ;
            
            ans+=dist ; 
            
        }
            
        
        return ans ;
    }
};