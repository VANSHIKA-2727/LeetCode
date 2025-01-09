/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (head==NULL){
        return false;
    }
    if( head->next ==NULL){
        return false ;
    }
    struct ListNode*pos=head;
    struct ListNode*t=head;
    while(pos!=NULL&&t!=NULL){
        t= t->next; 
        if(t!=NULL){
           t=t->next;
           pos=pos->next;
        }
        if( t == pos){ 
            return true;
        }
    }
return false;
    
}