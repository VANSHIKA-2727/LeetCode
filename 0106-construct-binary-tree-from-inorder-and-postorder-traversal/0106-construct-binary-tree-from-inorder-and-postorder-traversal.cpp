class Solution {
public:
    map<int,int> m;
    int i;

    TreeNode* construct(vector<int>& inorder, vector<int>& postorder, int l, int r) {
        if (l > r) return NULL;

        int mid = m[postorder[i--]];
        TreeNode* root = new TreeNode(inorder[mid]);

        
        root->right = construct(inorder, postorder, mid + 1, r);
        root->left  = construct(inorder, postorder, l, mid - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for (int j = 0; j < inorder.size(); j++) {
            m[inorder[j]] = j;
        }
        i = inorder.size() - 1;
        return construct(inorder, postorder, 0, inorder.size() - 1);
    }
};
