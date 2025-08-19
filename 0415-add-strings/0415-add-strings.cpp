class Solution {
public:
    // string addStrings(string num1, string num2) {
    //     unsigned long long x = stoull(num1);
    //     unsigned long long y = stoull(num2);
    //     unsigned long long z = x + y;
    //     return to_string(z);
    // }


 
    string addStrings(string num1, string num2) {
        string result = "";
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int x = (i >= 0) ? num1[i] - '0' : 0;
            int y = (j >= 0) ? num2[j] - '0' : 0;

            int sum = x + y + carry;
            result.push_back((sum % 10) + '0');
            carry = sum / 10;

            i--;
            j--;
        }

        reverse(result.begin(), result.end());
        return result;
    }


};
