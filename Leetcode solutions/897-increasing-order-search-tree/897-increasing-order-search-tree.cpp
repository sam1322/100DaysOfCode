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
    TreeNode* dfs(TreeNode* root , TreeNode *ancestor){
        if(!root)return ancestor; 
        root->left = dfs(root->left,root); 
        TreeNode *t = root->left; 
        root->left = nullptr ;
        root->right = dfs(root->right,ancestor); 
        
       
        return t ; 
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        if(!root)return NULL ;
        return dfs(root,NULL);
    }
};