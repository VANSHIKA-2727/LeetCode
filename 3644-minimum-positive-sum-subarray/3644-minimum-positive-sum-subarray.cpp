class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;
        
        for (int len = l; len <= r; len++) {
            int sum = 0;
            
            // first window of size len
            for (int i = 0; i < len; i++) {
                sum += nums[i];
            }
            if (sum > 0) ans = min(ans, sum);
            
            // sliding window
            for (int i = len; i < n; i++) {
                sum += nums[i] - nums[i - len];
                if (sum > 0) ans = min(ans, sum);
            }
        }
        
        return (ans == INT_MAX) ? -1 : ans;
    }
};
