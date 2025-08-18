class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> v1(n, 0);  // prefix sums
        vector<int> v2(n, 0);  // suffix sums
        vector<int> v3(n, 0);  // result differences

        // prefix sum
        v1[0] = nums[0];
        for (int i = 1; i < n; i++) {
            v1[i] = v1[i-1] + nums[i];
        }

        // suffix sum
        v2[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
            v2[i] = v2[i+1] + nums[i];
        }

        // difference
        for (int i = 0; i < n; i++) {
            v3[i] = abs(v1[i] - v2[i]);
        }

        return v3;
    }
};
