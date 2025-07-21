class Solution {
public:
    string largestOddNumber(string num) {
        string s ="";
        int n =num.length(); int i;
         for (i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {
                break;
            }
        }return num.substr(0, i + 1);
    }
};
