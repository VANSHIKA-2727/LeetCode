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
  bool safe (TreeNode * p , TreeNode*q){
    if(p==NULL && q==NULL)return true ;
    if(p==NULL||q==NULL)return false ;
    return p->val==q->val && safe(p->left,q->right) && safe(p->right , q->left);
  }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true ;
        else 
        return safe(root->left , root->right);
    }
};