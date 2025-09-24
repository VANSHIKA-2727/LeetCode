class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string res;
        // handle sign
        if ((numerator < 0) ^ (denominator < 0)) res += "-";

        long long n = abs((long long)numerator);
        long long d = abs((long long)denominator);

        // integer part
        res += to_string(n / d);
        n %= d;
        if (n == 0) return res;

        res += ".";
        unordered_map<long long, int> mp; // remainder -> index in res
        while (n) {
            if (mp.count(n)) {
                res.insert(mp[n], "(");
                res += ")";
                break;
            }
            mp[n] = res.size();
            n *= 10;
            res += to_string(n / d);
            n %= d;
        }
        return res;
    }
};
