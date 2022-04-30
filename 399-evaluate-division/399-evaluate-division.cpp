class Solution {
public:
    
    double bfs(map<string, vector<pair<string,double>>> &mp , string &src, string &end){
//         if(src==end){
//             for( auto x:mp[src]){
//                 if(x[1]==end)return x[2] ;
//             }
//             return -1; 
//         }
                if(mp.count(src)==0||mp.count(end)==0)return -1;

        vector<pair<string,double>> q;
        set<string> vis;
        q.push_back({src,1.0});
        vis.insert(src);
        while(!q.empty()){
            pair<string,double> V = q[0] ;
            q.erase(q.begin()) ;
            string u = V.first;
            double ans = V.second ;
            if(u == end){
                return ans ;
            }
            // if(vis.find(u)!=vis.end())continue ;
            // cout<<u<<endl;
            for(auto x:mp[u]){
                string v = x.first ;
                double wt = x.second ;
                // cout<<v<<" "<<wt <<endl;
                if(vis.find(v)==vis.end()){
                    vis.insert(v);
                    q.push_back({v,wt*ans}) ;                     
                }
            }
        }
        return -1.0 ;
    }
    
    vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& val, vector<vector<string>>& quer) {
        map<string, vector<pair<string,double>>> mp; 
        int n =  eq.size() ; 
        for(int i = 0 ; i < n ;++i){
            mp[eq[i][0]].push_back({eq[i][1],val[i]}) ;
            mp[eq[i][1]].push_back({eq[i][0],1.0/(1.0*val[i])}) ;
        }
        vector<double> ans; 
        for(int i = 0 ; i < quer.size() ;++i){
            ans.push_back(bfs(mp,quer[i][0],quer[i][1])) ; 
        }
        return ans ;
    }
};