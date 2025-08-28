#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<unsigned long long>> a(n + 1, vector<unsigned long long>(amount + 1, 0ULL));
        for (int i = 0; i <= n; ++i) a[i][0] = 1ULL;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= amount; ++j) {
                a[i][j] = a[i-1][j];
                if (j >= coins[i-1]) a[i][j] += a[i][j - coins[i-1]];
            }
        }

        if (a[n][amount] > (unsigned long long)INT_MAX) return INT_MAX;
        return static_cast<int>(a[n][amount]);
    }
};
