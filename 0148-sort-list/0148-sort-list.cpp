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
    ListNode* sortList(ListNode* head) {
        vector<int>v ;
        for(ListNode*i=head ;i!=NULL ;i=i->next)
            v.push_back(i->val);

            sort(v.begin(),v.end());

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

        
       return head ; 
        
    }
};