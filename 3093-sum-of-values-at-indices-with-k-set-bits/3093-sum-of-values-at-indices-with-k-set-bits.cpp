class Solution {
public:
    // helper function to count set bits
    int countBits(int n) {
        int count = 0;
        while (n > 0) {
            if (n & 1) {      // check last bit
                count++;
            }
            n >>= 1;          // right shift (move to next bit)
        }
        return count;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int bits = countBits(i);   // count set bits in index
            if (bits == k) {
                sum += nums[i];
            }
        }
        return sum;
    }
};
