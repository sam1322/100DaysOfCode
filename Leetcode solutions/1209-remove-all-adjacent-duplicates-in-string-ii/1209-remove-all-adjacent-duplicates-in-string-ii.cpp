class Solution {
public:
    string removeDuplicates(string s, int k) {
     vector<pair<int,int>> v;
        for(char i:s){
            if(v.empty()||v.back().first!=i){
                v.push_back({i,1}) ; 
            }
            else{
                v.back().second++;
                if(v.back().second==k)v.pop_back(); 
            }
        }
        string r = ""; 
        for(auto x:v){
            char a = x.first ;
            int b = x.second ; 
            for(int i = 0 ; i<b;++i ){
                r+=a;
            }
        }
        return r; 
    }
};