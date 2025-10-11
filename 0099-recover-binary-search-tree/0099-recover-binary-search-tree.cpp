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
TreeNode * first =NULL ;
TreeNode * second =NULL ;
TreeNode * prev = new TreeNode (INT_MIN);

   void ino(TreeNode * root ){
    if(root!=NULL){
        ino(root->left);
        if(prev !=NULL && root->val<prev->val){
            if(first==NULL) first = prev ;
            second = root ;
        }
        prev = root ;
        ino(root->right);
    }
   }
    void recoverTree(TreeNode* root) {
        ino(root);
        int temp = first->val ;
        first->val = second ->val ;
        second->val = temp ;   
    }
};