class Solution {
public:
    bool is_vowel(char ch) {
        return (ch=='a' || ch=='A' || 
                ch=='e' || ch=='E' || 
                ch=='i' || ch=='I' || 
                ch=='o' || ch=='O' || 
                ch=='u' || ch=='U');
    }

    string reverseVowels(string s) {
        int n = s.length();
        int i = 0, j = n - 1;

        while (i < j) {
            while (i < n && !is_vowel(s[i])) i++;
            while (j >= 0 && !is_vowel(s[j])) j--;

            if (i < j) {
                swap(s[i], s[j]);  // <-- fix here
                i++;
                j--;
            }
        }
        return s;
    }
};
