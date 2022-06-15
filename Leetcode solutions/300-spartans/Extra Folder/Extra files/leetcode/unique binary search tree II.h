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
    
    vector<TreeNode*> f(int start , int end){
        vector<TreeNode*>  v , Left , Right;
        if(start > end ) {
            v.push_back(nullptr)  ; 
        }
        for(int i = start ; i <= end ; ++i) {
            Left = f(start , i - 1)  ; 
            Right = f(i+1 , end ) ;
            for(int j = 0 ; j < Left.size() ; ++j ){
                for(int k = 0 ; k < Right.size() ; ++k){
                    TreeNode *newNode = new TreeNode(i) ; 
                    newNode->left = Left[j] ; 
                    newNode->right = Right[k] ; 
                    v.push_back(newNode) ; 
                }
            }
        }
        return v ;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        return f(1 ,n ) ; 
    }
};