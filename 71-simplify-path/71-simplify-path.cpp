class Solution {
public:
    string simplifyPath(string path) {
        //first split the files 
        // in javascript or python this can be easily done with the split('/')
        string str="" ;
        vector<string> files;
        for(char c:path){
            if(c == '/'){
                if(str.empty()||str=="." ) {str="";continue ; }
                
                if(str==".."){ if(!files.empty())files.pop_back() ;}
                else files.push_back(str) ;                
            str="";
                
            }
            else str+=c ; 
        }
        if(!(str.empty()||str=="." ) ){
                if(str==".."){ if(!files.empty())files.pop_back() ;}
                else files.push_back(str) ;                
            str="";
                
        }
        string res = "/" ;
        for(string s:files) res+=s + "/" ; 
        if(res.size() > 1 )res.pop_back();
        return res ; 
    }
};