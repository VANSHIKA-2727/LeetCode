class Solution {
public:
    bool isPerfectSquare(int num) {
                if (num < 0) {
            return false; // Negative numbers cannot be perfect squares
        }
        if (num == 0) {
            return true; // 0 is a perfect square
        }

        double squareRoot = sqrt(num);
        return floor(squareRoot) == ceil(squareRoot);

    }
};