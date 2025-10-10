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
   void ino(TreeNode* root , vector<int>&v){
    if(root!=NULL){
        ino(root->left ,v);
        v.push_back(root->val);
        ino(root->right ,v);
    }
   }
   TreeNode *arrange(vector<int>&v , int beg , int end){
    if(beg>end)return NULL ;
    int mid=(beg+end)/2;
    TreeNode* root = new TreeNode(v[mid]);
    root->left = arrange(v , beg , mid-1);
    root->right = arrange(v , mid+1 , end);
    return root ;

   }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        ino(root ,v);
        int n = v.size();

        TreeNode *x=arrange(v , 0 , n-1);
        return x;
            
        
    }
};