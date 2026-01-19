class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL) return NULL;   // ✅ fix: empty list

        ListNode* l = NULL, *ptr, *last;
        vector<int> v;

        while (head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }

        int n = v.size();
        k = k % n;                       // ✅ fix: handle k > n
        if (k == 0) return createList(v); // optional safety

        vector<int> v1;

        for (int i = n - k; i < n; i++) {   // ✅ fix: correct right rotation
            v1.push_back(v[i]);
        }

        for (int i = 0; i < n - k; i++) {
            v1.push_back(v[i]);
        }

        for (auto x : v1) {
            ptr = new ListNode(x);
            if (l == NULL) {
                l = ptr;
                last = ptr;
            } else {
                last->next = ptr;
                last = ptr;
            }
        }

        return l;
    }

private:
    ListNode* createList(vector<int>& v) {
        ListNode* l = NULL, *ptr, *last;
        for (int x : v) {
            ptr = new ListNode(x);
            if (l == NULL) {
                l = ptr;
                last = ptr;
            } else {
                last->next = ptr;
                last = ptr;
            }
        }
        return l;
    }
};
