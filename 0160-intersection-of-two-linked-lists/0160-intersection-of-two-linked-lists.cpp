/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *t = headA;
        while (t != NULL) {
            t->val = -t->val;
            t= t->next;
        }

        ListNode *t2 = headB;
        while (t2 != NULL) {
            if (t2->val < 0) {
                t = t2;
                break;
            }
            t2 = t2->next;
        }

        ListNode *t1 = headA;
        while (t1 != NULL) {
            t1->val = -t1->val;
            t1 = t1->next;
        }

        return t;
    }
};
