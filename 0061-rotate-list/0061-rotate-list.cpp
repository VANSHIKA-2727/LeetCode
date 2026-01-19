class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL) return NULL;   // minimal safety

        ListNode* l = NULL, *ptr, *last;
        vector<int> v;

        while (head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }

        int n = v.size();
        k = k % n;                       // minimal fix

        vector<int> v1;

        // ✅ corrected starting index
        for (int i = n - k; i < n; i++) {
            v1.push_back(v[i]);
        }

        // ✅ corrected loop range
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
};
