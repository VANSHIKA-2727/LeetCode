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
        vector<int>d ;

        map<int ,int>m ;
        for (int i=0 ;i<v.size();i++){
            m[v[i]]++;
        }

        for(auto x=m.begin();x!=m.end();x++){
            if(x->second==1){
                d.push_back(x->first);
            }
        }


        head = NULL ;
        ListNode* ptr ,* l ;

        for(int x : d){
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
