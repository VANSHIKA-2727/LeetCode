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
    ListNode* swapPairs(ListNode* head) {
        vector<int> v;

        ListNode* t = head;
        while (t != NULL) {
            v.push_back(t->val);
            t = t->next;
        }

        for (int i = 1; i < v.size(); i += 2) {
            swap(v[i], v[i - 1]);
        }

        head =NULL;
            ListNode *ptr , *l ;

            for(int x :v){
                ptr=new ListNode(x);
                if(head == NULL){
                    head =ptr ;
                    l=ptr ;
                }

                else {
                    l->next =ptr ;
                    l=ptr ;

                }
            }
        return head;
    }
};
