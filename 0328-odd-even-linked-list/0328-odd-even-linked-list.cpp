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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) return head;

        vector<int> v;
        ListNode* t = head;
        while (t != NULL) {
            v.push_back(t->val);
            t = t->next;
        }

        int n = v.size();
        vector<int> vv;

       
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) vv.push_back(v[i]);
        }

        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 1) vv.push_back(v[i]);
        }

        head = NULL;
        ListNode* ptr;
        ListNode* l = NULL;
        for (int x : vv) {
            ptr = new ListNode(x);
            if (head == NULL) {
                head = ptr;
                l = ptr;
            } else {
                l->next = ptr;
                l = ptr;
            }
        }

        return head;
    }
};
