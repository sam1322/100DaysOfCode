struct compar{
    bool operator()(const vector<int> &a, const vector<int> &b  ){
        return a[0] > b[0]; 
    }
}; 

vector<int> l = {-1,0,1,0,-1} ; 

class Solution {
public:
    int n , m ; 
    bool isvalid(int x , int y){
        return 0<=x && x < n && 0<=y && y<m ;
    }
    
    int minimumEffortPath(vector<vector<int>>& a) {
         n = a.size() , m = a[0].size() ; 
        priority_queue<vector<int>,vector<vector<int>>,compar> q;
        vector<vector<int>> costs(n,vector<int>(m,INT_MAX)); 
        q.push({0,0,0});
        costs[0][0] = 0 ; 
        while(!q.empty()){
            vector<int> cur = q.top() ; 
            q.pop();
            int cost = cur[0]; 
            int x = cur[1];
            int y = cur[2] ;
            for(int  i=0 ; i < 4 ; ++i){
                int X = x + l[i];
                int Y = y + l[i+1];
                if(!isvalid(X,Y))continue;
                int Cost = max(cost,abs(a[X][Y] - a[x][y] )) ; 
                
                if(Cost < costs[X][Y]){
                    costs[X][Y] = Cost ; 
                    q.push({Cost,X,Y});
                }
            }
        }
        return costs[n-1][m-1] ; 
    }
};