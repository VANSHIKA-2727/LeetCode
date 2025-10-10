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
     void ino(TreeNode *root1, vector<int>&v1){
        if(root1!=NULL){
            ino(root1->left , v1 );
            v1.push_back(root1->val);
            ino(root1->right , v1);
        }
     }
     void ino2(TreeNode *root2, vector<int>&v2){
        if(root2!=NULL){
            ino2(root2->left , v2 );
            v2.push_back(root2->val);
            ino2(root2->right , v2);
        }
     }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1 ;
        ino(root1 , v1 );
        vector<int>v2 ;
        ino2(root2 , v2);
        int i=0,j=0;vector<int>v;
        while(i<v1.size() && j<v2.size())
        {
            if(v1[i]<v2[j])
            v.push_back(v1[i++]);
            else
            v.push_back(v2[j++]);
        }
        while(i<v1.size() )
        {
            
            v.push_back(v1[i++]);
           
        }
        while(j<v2.size())
        {
            v.push_back(v2[j++]);
        }


        return v;
    }
};