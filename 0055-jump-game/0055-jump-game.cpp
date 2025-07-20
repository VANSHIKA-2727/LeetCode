class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int reach = 0;

        while (i < n && i <= reach) {
            reach = max(reach, i + nums[i]);
            if (reach >= n - 1) return true;
            i++;
        }

        return false;
    }
};
