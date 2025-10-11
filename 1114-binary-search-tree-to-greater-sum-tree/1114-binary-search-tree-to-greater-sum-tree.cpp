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
void ino(TreeNode*root , vector<int>&v){
    if(root!=NULL){
        ino(root->left , v);
        v.push_back(root->val);
        ino(root->right , v);
    }
}
void modi(TreeNode*root , vector<int>&v , int & i){
    
    if(root!=NULL){
        modi(root->left , v , i);
        root->val = v[i++];
        modi(root->right , v , i);
    }
}

    TreeNode* bstToGst(TreeNode* root) {
        vector<int>v ;
        ino(root , v);
        int n = v.size();
        for(int i=n-2 ;i>=0 ;i--)
        v[i]=v[i]+v[i+1];
    
    int i=0 ;
    modi(root ,  v, i);
    return root ;
    }
};