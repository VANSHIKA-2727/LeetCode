class Solution {
public:
    bool check(string s, int b, int e) {
        while (b < e) {
            if (s[b] != s[e]) {
                return false;
            }
            b++; 
            e--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int b = 0, e = s.length() - 1;

        while (b < e) {
            if (s[b] != s[e]) {
                // Try skipping one character from either end
                return check(s, b + 1, e) || check(s, b, e - 1);
            }
            b++;
            e--;
        }

        return true;
    }
};
