class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
          int n = nums.size();
        vector<int> l(n, 0);
        vector<int> r(n, 0);

        l[0] = nums[0];
        r[n - 1] = nums[n - 1]; // Initialize last element of r

        for (int i = 1; i < n; i++) {
            l[i] = l[i - 1] + nums[i];
            r[n - i - 1] = r[n - i] + nums[n - i - 1]; 
        }

        for (int i = 0; i < n; i++) {
            if (l[i] == r[i]) return i;
        }

        return -1;
    }
};