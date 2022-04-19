/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // O(N) time complexity and O(N) space complexity
    vector<int> v ;
    int ind  ;
    void f(TreeNode *root){
        if(!root)return ;
        
        f(root->left);
        v.push_back(root->val);
        f(root->right);
    }
    void f1(TreeNode *root){
        if(!root)return ;
        
        f1(root->left);
        root->val = v[ind++];  
        f1(root->right);
    }
    void recoverTree(TreeNode* root) {
        v.clear() ;
        ind = 0 ;
        f(root);
        sort(v.begin(),v.end()); 
        f1(root);
    }
};