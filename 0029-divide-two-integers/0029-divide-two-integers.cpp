class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX; // handle overflow
        return dividend / divisor;  // keep the sign, no abs()
    }
};
