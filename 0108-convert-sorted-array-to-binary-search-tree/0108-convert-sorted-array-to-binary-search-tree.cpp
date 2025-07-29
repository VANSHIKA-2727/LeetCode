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

TreeNode* arrange(vector<int>& nums,int beg,int end)
    {
         if(beg>end)return NULL;
        int mid=(beg+end)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left  = arrange(nums,beg,mid-1);
        root->right = arrange(nums,mid+1,end);
        return root;
    }
   
    TreeNode* sortedArrayToBST(vector<int>& nums) {
         TreeNode *x=arrange(nums,0,nums.size()-1);
        return x;
    }
};