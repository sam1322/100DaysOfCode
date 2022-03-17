class Solution {
public:
vector<vector<int>>mp;
    string K ; 
    string a ,b ; 
    bool helper(int i,int j , string &out){
        
        if( i >= a.size()  && j >= b.size() ){
            return mp[i][j] = (out == K) ; 
        }
        // cout<<i<<" "<<j<<" "<<out<<" "<<a[i]<<" "<<b[j]<<" "<<K <<endl;

        if(mp[i][j] !=-1 )return mp[i][j] ; 

        if(i < a.size() && a[i]==K[out.size()])
        {   out.push_back(a[i]) ;
            if(helper(i + 1 , j , out )) return mp[i][j] = true ;      
            out.pop_back() ; 
        }
        
        if( j < b.size() && b[j]==K[out.size()])
        {   out.push_back(b[j]) ;
            if(helper( i , j + 1 , out )) return mp[i][j] = true ;  
            out.pop_back() ;
        }
        return mp[i][j] = false ;
    }
    
    
    bool isInterleave(string s1, string s2, string s3) {
        mp.assign(s1.size()+1 ,vector<int>(s2.size()+1 ,-1)) ;
        K =s3 ; 
        a = s1 ; 
        b = s2 ;
        string ans = "" ; 
        return helper(0,0,ans) ;
    }
};