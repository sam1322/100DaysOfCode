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
    vector<TreeNode*> v;
    
    void dfs(TreeNode* root){
        if(!root)return ;
        dfs(root->left);
        v.push_back(root) ; 
        dfs(root->right);
        
    }
    
    TreeNode* DFS(int start , int end ){
        if(start >= end)return NULL ; 
        int mid = start + (end - start)/2 ; 
        v[mid]->left=DFS(start,mid) ;
        v[mid]->right=DFS(mid + 1,end) ;
        return v[mid] ;
    }
    
public:
    TreeNode* balanceBST(TreeNode* root) {
        v.clear(); 
        dfs(root);
        return DFS(0,v.size())  ;
    }
};