class Solution {
public:
    string reverseWords(string s) {
        string wd = "", mst = "";
        s = s + " ";  // Add space to handle last word

        for (char x : s) {
            if (x != ' ') {
                wd = x + wd;  // Reverse each word
            } else if (!wd.empty()) {
                mst = mst + (mst.empty() ? "" : " ") + wd; // Append word with space
                wd = "";
            }
        }

        return mst;
    }
};
