class Solution {
public:
     bool open(char x){
        return (x=='('||x=='{'||x=='[') ; 
    }
    
    bool closed(char x){
        return (x==')'||x=='}'||x==']');
         
    }
    bool isitequal(char &x,char &y){
        return ((x=='{'&&y=='}')||(x=='['&&y==']')||(x=='('&&y==')')) ; 
    }
    
    bool isValid(string s) {
        vector<char> v; 
        for(char x : s){
            if(open(x)){
                v.push_back(x) ;
            }
            else if(!v.empty()){
                    if(isitequal(v.back() , x)){
                        v.pop_back() ;
                    }
                    else{
                        return false;
                    }
            }
           else return false; 
        }
        if(v.empty())
        return 1 ;
        
        return false ; 
    }
};