/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* t = head;
        vector<int> v;

        while (t != NULL) {
            v.push_back(t->val);
            t = t->next;
        }

        vector<int> v2;
        for (int i = v.size() - 1; i >= 0; i--) {
            v2.push_back(v[i]);
        }

        if (v == v2)
            return true;
        return false;
    }
};
