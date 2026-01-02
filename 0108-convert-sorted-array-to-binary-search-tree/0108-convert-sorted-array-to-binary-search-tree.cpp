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
TreeNode * arrange(vector<int>&v , int beg , int end ){
    int mid ;
    if(beg<=end){
        mid=(beg+end)/2;
        TreeNode *root= new TreeNode(v[mid]);
        root->left = arrange(v , beg , mid-1);
        root->right = arrange(v , mid+1, end);
        return root ;
    }
    else return NULL;
    

}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode * x = arrange(nums , 0 , nums.size()-1);
        return x ;
    }
};