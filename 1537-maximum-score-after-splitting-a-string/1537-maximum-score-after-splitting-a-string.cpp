class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        vector<int> v1(n, 0);  // prefix count of 0s
        vector<int> v2(n, 0);  // suffix count of 1s

        v1[0] = (s[0] == '0' ? 1 : 0);
        for (int i = 1; i < n; i++) {
            v1[i] = v1[i - 1] + (s[i] == '0' ? 1 : 0);
        }

        v2[n - 1] = (s[n - 1] == '1' ? 1 : 0);
        for (int i = n - 2; i >= 0; i--) {
            v2[i] = v2[i + 1] + (s[i] == '1' ? 1 : 0);
        }

        int ma = 0;
        for (int i = 0; i < n - 1; i++) {
            int x = v1[i] + v2[i + 1];  // split after i
            ma = max(ma, x);
        }

        return ma;
    }
};
