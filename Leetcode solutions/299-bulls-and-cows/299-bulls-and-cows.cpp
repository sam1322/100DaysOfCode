class Solution {
public:
    string getHint(string secret, string guess) {
        int b = 0 , c=  0;
        vector<int> bull(10),cow(10);
        for(int i = 0; i < secret.size() ; ++i){
            if(secret[i]==guess[i])b++;
            else{
                bull[secret[i]-'0']++;
                cow[guess[i]-'0']++;
            }
        }
        for(int i = 0 ; i < 10 ;++i)c+=min(cow[i],bull[i]);
        string s ="";
        s=to_string(b) +"A" + to_string(c)+"B";
        return s;
    }
};