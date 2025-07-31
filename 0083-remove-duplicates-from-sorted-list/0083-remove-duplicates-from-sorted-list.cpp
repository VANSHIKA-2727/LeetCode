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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int >v ;
        ListNode* t = head ;
        
        while(t != NULL){                
            v.push_back(t->val );
            t = t->next ;
        }

        sort(v.begin(), v.end());
        auto it = unique(v.begin(), v.end());
        v.erase(it , v.end());

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
