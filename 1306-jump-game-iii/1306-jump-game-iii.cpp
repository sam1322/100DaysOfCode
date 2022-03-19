class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size() ; 
        vector<int> v(n,0 ) ; 
        queue<int> q; 
        q.push(start) ;
        v[start] = 1 ;
        while(!q.empty() ){
            int cur = q.front() ; 
            q.pop() ;
            
            int l , r ;
            l = cur - arr[cur]  ;
            r = cur + arr[cur]  ;
            if(l>=0 && l < n && !v[l]){
                q.push(l); 
                v[l] = 1;
            }
            if( r >= 0 && r < n && !v[r]){
                q.push(r) ;
                v[r] = 1 ;
            }
        }
        for(int i = 0 ; i < n ; ++i){
            if(arr[i]==0 && v[i] == 1)return true; 
        }
        return false ;
    }
};