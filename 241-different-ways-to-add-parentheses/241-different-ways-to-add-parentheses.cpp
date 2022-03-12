class Solution {
public:
    
    
map<string,vector<int>> mp ;

vector<int> f(string s){
    vector<int> res ;
    // if(start>=end)return res ;
    // string s=s.substr(start,end-start)
    if(mp.count(s) > 0)return mp[s] ; 
    int n = s.size() ; 
    for(int i = 0 ; i < n ; ++i){
        char c = s[i] ; 
        if(c=='+'||c=='-'||c=='*'){
            vector<int> res1 = f(s.substr(0,i)) ; 
            vector<int> res2 = f(s.substr(i+1)) ; 

            for(auto i:res1 )
            {
                for(auto j:res2){
                    if(c == '+'){
                        res.push_back(i+j); 
                    }
                    else if(c=='-'){
                        res.push_back(i-j);
                    }
                    else if(c=='*'){
                        res.push_back(i*j) ; 
                    }
                }
            }
        }

    }

    if(res.empty()){
        res.push_back(stoi(s));
    }
    mp[s] = res ; 
    return mp[s] ;


}
    
    vector<int> diffWaysToCompute(string s) {
        
        mp.clear() ; 
        return f(s) ;
    }
};