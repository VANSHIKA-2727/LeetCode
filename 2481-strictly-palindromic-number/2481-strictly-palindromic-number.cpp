class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        vector<int> v;
        int num = n;  

        while (num > 0) {
            int rem = num %10 ;
            num = num / 2;
            v.push_back(rem); 
        }

        vector<int> rev = v;           
        reverse(rev.begin(), rev.end());  

        if (rev == v) {
            return true;
        } else {
            return false;
        }
    }
};
