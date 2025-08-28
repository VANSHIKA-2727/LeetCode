

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        // Use 64-bit unsigned to avoid sanitizer for signed overflow
        vector<unsigned long long> dp(amount + 1, 0ULL);
        dp[0] = 1ULL;

        for (int c : coins) {
            for (int j = c; j <= amount; ++j) {
                dp[j] += dp[j - c];
            }
        }

        // If you must return an int, either cast (may truncate) or clamp:
        if (dp[amount] > (unsigned long long)INT_MAX) return INT_MAX; // clamp
        return static_cast<int>(dp[amount]);
    }
};
