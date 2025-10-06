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
int ele = -1 ;
int mini = INT_MAX ;
void ino(TreeNode* root){
    if(root!=NULL){
        ino(root->left);
        if(ele!=-1){
        mini =  min(mini ,abs(root->val- ele));
        }
        ele=root->val ;
        ino(root->right);
    }
}
    int minDiffInBST(TreeNode* root) {
       ino(root);
       return mini ;

    }
};