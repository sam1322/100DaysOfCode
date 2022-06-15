class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> a = nums ; 
        sort(a.begin() , a.end()); 
        int i =  0 ,j = a.size() - 1; 
        while(i < j && (a[i] == nums[i] || a[j] ==nums[j])){
            if(a[i]==nums[i])i++;
            if(a[j] == nums[j] )j--;
        }
        return (j- i<=0)?0:j-i+1;
    }
};