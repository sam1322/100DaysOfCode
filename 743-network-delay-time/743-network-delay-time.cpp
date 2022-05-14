struct compar{
    bool operator()(const vector<int> &a,const vector<int> &b){
        return a[0] > b[0]; 
    }
};

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        priority_queue<vector<int> , vector<vector<int>>,compar> q;
        vector<vector<vector<int>>> g(n); 
        for(vector<int> i:times){
            int u = i[0] - 1;
            int v = i[1] - 1;
            int w = i[2] ;
            g[u].push_back({v,w});
        
        }
        vector<int> time(n,INT_MAX);
        k--;
        q.push({0,k}) ; 
        time[k]= 0 ;
        while(!q.empty()){
            vector<int> U = q.top() ;
            q.pop();
            int t = U[0]; 
            int u = U[1] ; 
            if(t > time[u])continue;
            for(vector<int> &x:g[u]){
                int v = x[0];
                int T = x[1] + t ; 
                if(T < time[v]){
                    time[v] = T; 
                    q.push({T,v}) ; 
                }
            }
        }
        int mx = 0; 
        for(int i = 0 ; i < n ; ++i){
            if(i==k) continue; 
            if(time[i]==INT_MAX)return -1; 
            mx = max(mx, time[i]);
        }
        return mx;
        
    }
};