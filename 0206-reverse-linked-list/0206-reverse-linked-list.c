/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
   struct ListNode* prev=NULL;
    struct ListNode* next=NULL;
    struct ListNode* t= head;
    while(t!=NULL){
        next=t->next;
        t->next= prev;
        prev=t;
        t=next;
    }
    return prev;
}