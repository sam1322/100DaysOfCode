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
    
    int helper(TreeNode* root, int sum ){
        if(!root) return sum ; 
        if(!root->left && !root->right){
            root->val+=sum ;
            return root->val ; 
        }
        int s1 = helper(root->right,sum) ;
        root->val +=s1; 
        return max(root->val,helper(root->left,root->val)) ; 
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        int sum = helper(root,0); 
        return root ;
    }
};