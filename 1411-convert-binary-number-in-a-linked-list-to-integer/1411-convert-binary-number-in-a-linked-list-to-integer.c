/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int c = 0;
    struct ListNode*t=head;
    while( t!= NULL){
        c++;
        t= t->next;
    }
    // s= sum ; c= count 
    int s = 0;
    c--; t= head;
    while( t!= NULL){
        s= s+t->val*pow(2,c);
        c--;
        t=t->next;
    }
return s;
}