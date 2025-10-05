class Solution {
public:
    map<int,int> m;

    void inorder(TreeNode* root) {
        if (root != NULL) {
            inorder(root->left);
            m[root->val]++;
            inorder(root->right);
        }
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root); // fill map with frequencies

        int maxFreq = 0;
        for (auto &x : m) {
            maxFreq = max(maxFreq, x.second);
        }

        vector<int> result;
        for (auto &x : m) {
            if (x.second == maxFreq) {
                result.push_back(x.first);
            }
        }

        return result;
    }
};
