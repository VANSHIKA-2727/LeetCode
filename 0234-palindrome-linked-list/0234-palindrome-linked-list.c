/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
      struct ListNode *n1=NULL,*t=NULL,*l=NULL ,*p;
      t=head;
      while(t!=NULL)
      {
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=t->val;p->next=n1;
        n1=p;
        t=t->next;
      }
      t=head;
      l=n1;
      while(t!=NULL)
      {
        if(t->val != l->val)return false;
        t=t->next; l=l->next;
      }
      return true;
  
}