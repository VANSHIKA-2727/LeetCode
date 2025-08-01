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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v ;
        ListNode*t=head ;
        while(t!=NULL){
            v.push_back(t->val);
            t=t->next ;
        }

    for (int i = left - 1, j = right - 1; i < j; i++, j--) {
    swap(v[i], v[j]);
}


        head = NULL ;
        ListNode* ptr ,* l ;

        for(int x : v){
            ptr = new ListNode(x);
            if(head == NULL){
                head = ptr ;
                l = ptr ;
            }
            else {
                l->next = ptr ;
                l = ptr ;
            }
        }

        return head ;
        
    }
};