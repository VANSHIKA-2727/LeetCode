class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = nums[0], x = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                x = i;
            }
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (i != x && nums[i] * 2 > maxi) {
                return -1;
            }
        }

        return x;
    }
};
