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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3 =NULL , *ptr , *last ;
        vector<int>v1;
      
        while(l1!=NULL){
            v1.push_back(l1->val);l1=l1->next;
        }
        while(l2!=NULL){
            v1.push_back(l2->val);l2=l2->next;
        }
        sort(v1.begin(),v1.end());
        for(int x:v1){
          
            ptr=new ListNode(x);
            if(l3==NULL){
                l3=ptr;
                last=ptr;
            }
            else{
                last->next=ptr;
                last=ptr;
            }
          
           
        }


return l3 ;

    }
};