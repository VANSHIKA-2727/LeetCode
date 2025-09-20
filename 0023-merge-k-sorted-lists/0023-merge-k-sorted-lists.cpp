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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v ;
        ListNode*head =NULL , *last=NULL ,*ptr =NULL ;
        for(int i=0 ;i<lists.size();i++){
            ListNode*t =lists[i];
            while(t!=NULL){
                v.push_back(t->val );
                t=t->next ;
            }
        }
        sort(v.begin() , v.end());
        for(int x:v ){
            ptr= new ListNode(x);
            if(head==NULL){
                head =ptr ;
                last =ptr ;

            }

            else{
                last->next = ptr ;
                last = ptr;
            }
        }
        return head ;
    }
};