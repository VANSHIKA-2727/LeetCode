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
 vector<int>v ;
        void ino (TreeNode* root){
            if(root!=NULL){
                ino(root->left);
                v.push_back(root->val);
                ino(root->right);
            }
        }
        TreeNode* insert(TreeNode* root , int ele){
            if (root==NULL){
                root= new TreeNode (ele);
            }
            else if(ele<root->val){
                root->left = insert(root->left , ele);
            }
            else{
                root->right = insert ( root->right , ele );

            }
            return root ;
        }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode * t= NULL ;
        ino(root);
        for(int i=0 ;i<v.size();i++){
            t= insert(t,v[i]);
        }
       return t ;
        
    }
};