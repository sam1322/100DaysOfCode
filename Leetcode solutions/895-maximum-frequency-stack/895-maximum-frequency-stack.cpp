// class Compare{
//     public:
//     boolean operator()(pair<int,int> &a,pair<int,int> &b){
//         if()
//     }
// }

class FreqStack {
public:
    unordered_map<int,int> freq; 
    unordered_map<int,vector<int> > m ;
    int maxFreq ; 
    FreqStack() {
        maxFreq = 0 ;
    }
    
    void push(int val) {
        freq[val]++;
        maxFreq = max(maxFreq , freq[val]) ; 
        // if(m.count)
        m[freq[val]].push_back(val) ; 
    }
    
    int pop() {
        while(m[maxFreq].empty()){
            maxFreq--;
        }
        
        int val = m[maxFreq].back() ; 
        freq[val]-- ;
        m[maxFreq].pop_back();         
        return val ; 
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */