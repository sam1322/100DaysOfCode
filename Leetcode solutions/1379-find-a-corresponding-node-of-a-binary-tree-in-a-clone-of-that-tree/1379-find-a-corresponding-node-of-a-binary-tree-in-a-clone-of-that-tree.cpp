/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* orig, TreeNode* clone, TreeNode* t) {
        if(!orig)return NULL ; 
        
        if(orig==t){
            return clone ;
        }
        
        TreeNode* a = getTargetCopy(orig->left,clone->left,t) ;
        
        if(a)return a; 
        
        TreeNode* b = getTargetCopy(orig->right,clone->right,t) ;
        
        return b ;
    }
};