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
    int maxDepth(TreeNode* root) {
        if ( root == NULL)return 0 ;

        else {
            int l = maxDepth(root->left );
            int r = maxDepth( root->right );
            int c ;
            if(l>r){
                return l+1 ;
            }
            else return r+1 ;
            // return l>r ? l+1 : r+1 ;
        }
    }
};