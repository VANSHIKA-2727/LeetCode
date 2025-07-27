class Solution {
public:
    int pivotInteger(int n) {
        vector<int> v1(n + 1, 0);
        vector<int> v2(n + 1, 0); 

        v2[n] = n;

        for (int i = 1; i <= n; i++) {
            v1[i] = v1[i - 1] + i;
        }

        for (int i = n - 1; i >= 0; i--) {
            v2[i] = v2[i + 1] + i;
        }

        for (int i = 1; i <= n; i++) {
            if (v1[i] == v2[i])
                return i;
        }

        return -1;
    }
};
