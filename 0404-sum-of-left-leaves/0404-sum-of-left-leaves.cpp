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

int Sum (TreeNode * root , int x){
   if (root == NULL){
    return NULL ;
   }

   if (root->left == NULL&& root->right == NULL && x==1){
    return root->val ;
   }
   return Sum(root->left,1) +Sum(root->right,2);
}
    
    
    int sumOfLeftLeaves(TreeNode* root) {
        
        return Sum(root->left, 1) + Sum(root->right, 2);

        
    }
};