/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int c =0;
    struct ListNode*t=head;
    while(t!=NULL){
        c++;
        t=t->next;
    }
    int pos = (c/2+1);
    c=1;t= head;
    while(t!=NULL){
        if(c==pos){
            break;
           
        }
        t=t->next;
         c++;
    }
    return t ;
    
}