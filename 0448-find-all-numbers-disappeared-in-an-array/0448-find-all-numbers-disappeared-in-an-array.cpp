class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n + 1, 0);  // Make size n+1 to use 1-based indexing

        for (int i = 0; i < n; i++) {
            v[nums[i]] = 1;  // Mark the number as present
        }

        vector<int> ans;  // To store missing numbers
        for (int i = 1; i <= n; i++) {
            if (v[i] == 0) {
                ans.push_back(i);  // If not marked, it's missing
            }
        }

        return ans;
    }
};
