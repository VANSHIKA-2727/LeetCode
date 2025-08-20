class Solution {
public:
    int totalNumbers(vector<int>& n) {
        vector<int> v;                 // keep OG variable
        unordered_map<int,int> mp;     // use map to ensure uniqueness of numbers

        int pro = 1;                   // keep OG variable; will store the answer
        int y = n.size();
        if (y < 3) {                   // need at least 3 digits
            return 0;
        }

        // Generate all 3-digit numbers using distinct indices
        for (int i = 0; i < y; i++) {
            if (n[i] == 0) continue;   // hundreds place can't be zero
            for (int j = 0; j < y; j++) {
                if (j == i) continue;
                for (int k = 0; k < y; k++) {
                    if (k == i || k == j) continue;

                    // only the last digit must be even
                    if ((n[k] & 1) != 0) continue;

                    int num = n[i]*100 + n[j]*10 + n[k];
                    mp[num] = 1;       // mark existence
                }
            }
        }

        v.push_back((int)mp.size());   // keep using v
        pro = v[0];                    // store answer in pro
        return pro;                    // return count of unique valid numbers
    }
};
