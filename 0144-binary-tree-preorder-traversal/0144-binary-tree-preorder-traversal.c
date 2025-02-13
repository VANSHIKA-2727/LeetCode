/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 int a[10000],k=0;
 void trav(struct TreeNode* root)
 {
    if(root!=NULL)
    {
        a[k++]=root->val;
        trav(root->left);
        trav(root->right);
    }
 }
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    k=0;
    trav(root);
    *returnSize=k;
    int*p= (int*)malloc(sizeof(int)*k);
    for(int i=0;i<k;i++)
    p[i]=a[i];
    return p;
}
