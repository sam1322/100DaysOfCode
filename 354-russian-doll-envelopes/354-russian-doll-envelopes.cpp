class Solution {
public:
 
    
    int bsearch(int a){
        int mid ,low = 0 , high = v.size() ; 
        while(low < high) {
            mid = low + (high - low) /2 ; 
            if(v[mid] < a  ){
                low = mid + 1;
            }
            else high = mid ; 
        }
        return low ;
    }
    
    vector<int> v; 
    
        
    int maxEnvelopes(vector<vector<int>>& env) {
        int n = env.size(); 
        v.clear() ;
        sort(env.begin() ,env.end() , [](const vector<int> &a,const vector<int> &b ){
           if(a[0] == b[0])return a[1] > b[1] ;
            return a[0] < b[0] ;
        });
        for(vector<int> e :env ){
            int pos = bsearch(e[1]);
             if(pos==v.size())v.push_back(e[1]) ; 
            else 
                v[pos] = e[1] ;
            
            
        }
       return v.size() ; 
        
    }
    
    
};