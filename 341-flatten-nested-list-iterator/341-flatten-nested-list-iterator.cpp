/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    vector<int>a ; 
    int i = 0 ; 
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        helper(nestedList);
    }
    
    void helper(vector<NestedInteger> x){
        for(NestedInteger i : x){
            if(i.isInteger()){
                a.push_back(i.getInteger()); 
            }
            else{
                helper(i.getList());
            }
        }
    }
    
    int next() {
        if( i < a.size())return a[i++];
        return INT_MIN;
    }
    
    bool hasNext() {
        return i < a.size() ;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */