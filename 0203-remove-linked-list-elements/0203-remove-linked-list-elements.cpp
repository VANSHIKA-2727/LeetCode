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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *t = head;
        vector<int> v;

     
        while (t != NULL) {
            v.push_back(t->val);
            t = t->next;
        }

        
        vector<int> vv;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != val)
                vv.push_back(v[i]);
        }

      
        head = NULL;
        ListNode *ptr, *l = NULL;

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
