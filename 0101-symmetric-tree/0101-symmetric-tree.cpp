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
    bool isMirror(TreeNode *X ,TreeNode *Y){
        if (X == NULL && Y == NULL){return true ;}
        else if(X==NULL || Y==NULL){
            return false ;
        }
        else return (X->val == Y->val) && isMirror(X->left,Y->right)&& isMirror(X->right ,Y->left)  ;  
    }
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left , root ->right);
        
    }
};