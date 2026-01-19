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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=NULL , *ptr ,*last ;
        int c=0 ;
        while(l1!=NULL&& l2!=NULL){
            int x=c+l1->val+l2->val;
            c=x/10;
            x=x%10 ;
            ptr=new ListNode(x);
            if(l3==NULL){
                l3=ptr;
                last=ptr;
            }
            else{
                last->next=ptr;
                last=ptr;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            int x=c+l1->val;
            c=x/10;
            x=x%10 ;
            ptr=new ListNode(x);
            if(l3==NULL){
                l3=ptr;
                last=ptr;
            }
            else{
                last->next=ptr;
                last=ptr;
            }
            l1=l1->next;
            
        }
        while(l2!=NULL){
            int x=c+l2->val;
            c=x/10;
            x=x%10 ;
            ptr=new ListNode(x);
            if(l3==NULL){
                l3=ptr;
                last=ptr;
            }
            else{
                last->next=ptr;
                last=ptr;
            }
          
            l2=l2->next;
        }
        if(c==1){
            ptr=new ListNode(c);
            last->next=ptr;
            last=ptr;
        }
        return l3;
    }
};