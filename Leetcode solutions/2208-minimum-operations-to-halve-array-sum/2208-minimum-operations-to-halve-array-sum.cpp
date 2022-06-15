class Solution {
public:
    int halveArray(vector<int>& nums) {
        double s = 0 ,sum = 0 ;
        priority_queue<double> q; 
        for(int i : nums) {sum+=i ; 
            q.push(i); 
        }
        int i = 0 ; 
        s = sum ;
        sum /=2.0; 
        while(!q.empty() && s > sum){
            float cur = q.top() ; 
            q.pop() ; 
            s-=cur ; 
            s+=(cur/2.0);
            q.push(cur/2.0) ; 
            i++;
        }
        return  i;
    }
};