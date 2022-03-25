class Solution {
public:
    long long maximumSubsequenceCount(string t, string p){
        // long long ans = 0 ;
        int n = t.size(); 
        
        vector<int> a,b ; 
        
        for(int i = 0 ; i < n ;++i ){
            if(t[i]==p[0])a.push_back(i) ;
            if(t[i]==p[1])b.push_back(i) ;
            
        }
        // for(int i :a)cout<<i << " " ; cout<<endl;
        // for(int i :b)cout<<i << " " ; cout<<endl;
                
        long long x = a.size() ,y =b.size()  ,ans = 0 ; 
        
        if(p[0]==p[1]){
            if(x==0||x==1)return x ;
            
            return ((x+1)*(x))/2 ;
        }
        
        for(int i = 0 ; i < x ; ++i){
            
           int pt = lower_bound(b.begin() , b.end(), a[i] ) - b.begin(); 
           ans+=(y  - pt) ; 
            
//             for(int j = 0 ; j < y ;++j ){
//                 if(a[i] <= b[j]){
//                     ans+=(y - j  ) ; 
//                     cout<<ans<<endl;
                    
//                     break ;
//                 }
//             }
        }
         
        return max(x , y) + ans ;
    }
};