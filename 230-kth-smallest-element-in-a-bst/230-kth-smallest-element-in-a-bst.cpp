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
    int ans , K , i ;
    
    void f(TreeNode* root){
        if(!root)return ;
        if(ans!=-1)return ;
        f(root->left);
        i++;
        if(i==K){
            ans = root->val;
            return ; 
        }
        f(root->right);
        
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        ans = -1; 
        i = 0 ;
        K = k ;
        f(root);
        return ans ;
    }
};