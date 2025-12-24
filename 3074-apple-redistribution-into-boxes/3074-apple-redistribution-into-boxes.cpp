class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {

        int n = capacity.size();
        sort(capacity.begin(), capacity.end());
        int m = apple.size();
        int s = 0;
        int j = 0;

        for (int i = 0; i < m; i++) {
            s = s + apple[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            if (s > 0) {
                s = s - capacity[i];
                j++;
            }
        }

        return j;
    }
};
