class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int c = 0;
        vector<int> v;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                v.push_back(nums[i]);
            }
        }
        v.push_back(nums[nums.size() - 1]); // Add last element to maintain sequence

        for (int i = 1; i < v.size() - 1; i++) {
            if (((v[i - 1] < v[i]) && (v[i] > v[i + 1])) || ((v[i - 1] > v[i]) && (v[i] < v[i + 1]))) {
                c++;
            }
        }
        return c;
    }
};
