class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();
        
        if (m == 0) return 0;

        for (int i = 0; i <= n - m; i++) {
            if (haystack[i] == needle[0]) {
                int f = 0;
                for (int j = 0; j < m; j++) {
                    if (haystack[i + j] != needle[j]) {
                        f = 1;
                        break;
                    }
                }
                if (f == 0) {
                    return i;
                }
            }
        }
        return -1;
    }
};
