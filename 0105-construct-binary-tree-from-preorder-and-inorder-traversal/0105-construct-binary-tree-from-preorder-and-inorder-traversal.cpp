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
map<int,int>m ;
int i=0 ;
TreeNode * construct(vector<int>& preorder, vector<int>& inorder , int l , int r){
    
    if(l>r)return NULL ;
    int mid = m[preorder[i++]];
    TreeNode *root= new TreeNode(inorder[mid]);
    root->left = construct (preorder , inorder , l , mid-1);
    root->right = construct (preorder , inorder , mid+1 , r);
    return root ;

}


    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        for( int i=0 ;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        return construct(preorder , inorder , 0 , inorder.size()-1);
    
        
    }
};