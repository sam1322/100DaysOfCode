struct compar{
    bool operator()(char &a,char &b){
        return a > b ; 
    }
};

class Solution {
public:
    vector<int> par; 
    int find(int u){
        if(par[u]==-1)return u; 
        par[u] = find(par[u]);
        return par[u] ; 
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n = s.size() ; 
        par.assign(n,-1); 
        for(auto &p :pairs){
            int u = p[0] , v = p[1]; 
            int a= find(u) , b = find(v);
            if(a==b)continue; 
            par[a] = b ; 
            
        }
        
        map<int,set<int>> mp ;
        for(int i = 0 ; i < n ; ++i){
            int u = find(i); 
            mp[u].insert(i) ;
        }
        
        for(auto x:mp){
            set<int> st = x.second ;
            priority_queue<char,vector<char> ,greater<char> > q; 
            // string q; 
            for(int i :st){
                q.push(s[i]); 
                // q+=s[i] ; 
            }
            // sort(q.begin(),q.end()); 
            int j = 0 ; 
            for(int i:st){
                // s[i]=q[j++] ;
                s[i]=q.top();
                q.pop(); 
            }
            
        }
        return s ;
        
    }
    
};