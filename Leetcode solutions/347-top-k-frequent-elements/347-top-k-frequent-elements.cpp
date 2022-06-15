class compare
{
public:
    bool operator() (pair<int,int> &a , pair<int,int> &b)
    {
        return a.second < b.second ;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
        for(int i : nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>> , compare> q;
        for(auto x:mp){
            q.push(x);
        }
        vector<int> v ;
        for(int i = 0 ; i < k ; ++i){
            pair<int,int> p = q.top() ;
            v.push_back(p.first) ;
            q.pop() ;
        }
        return v;
    }
};