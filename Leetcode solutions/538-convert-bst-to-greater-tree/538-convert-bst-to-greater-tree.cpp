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
    
    int f(TreeNode* root,int sum ){
        if(!root)return sum ;
        
        sum = f(root->right,sum); 
        
        root->val+=sum ;
        sum = root->val ;
        sum = f(root->left , sum);
        
        return sum ; 
        
    }
    
    
    TreeNode* convertBST(TreeNode* root) {
        if(!root)return NULL ;
        
        int sum = 0 ;
        sum = f(root , sum) ; 
        return root;
        
        
        
    }
};