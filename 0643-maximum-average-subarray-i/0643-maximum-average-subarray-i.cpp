class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double s = 0 ;
        double avg ;
        double maxi = -1e9 ;   // changed from int to double

        for (int i = 0; i < k; i++) {
            s = s + nums[i];
        }

        avg = s / k ;
        maxi = max(maxi, avg);

        // sliding window to check other subarrays of size k
        for (int i = k; i < nums.size(); i++) {
            s = s - nums[i - k] + nums[i];  // update sum
            avg = s / k ;
            maxi = max(maxi, avg);
        }

        return maxi ;
    }
};
