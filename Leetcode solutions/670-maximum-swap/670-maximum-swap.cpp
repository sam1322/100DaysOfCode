class Solution {
public:
     int maximumSwap(int num) {
        string s = to_string(num) ;
        string r = s ; 
        sort(s.begin(),s.end(),greater<char>()) ; 
        int n = s.size() ; 
        for(int i = 0 ; i < n ;++i){
            if(s[i]!=r[i] ){
                int j ;
                for( j = n - 1 ; j >i ;--j ){if (r[j]==s[i])break ;}
                cout<<i<< " "<<s[i]<<" " <<r[i] <<" "<<j<<endl;
                swap(r[i], r[j]) ;
                break ;
            }
        }
        return stoi(r) ;
    }
};