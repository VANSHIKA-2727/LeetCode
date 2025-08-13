#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<double> v; 

        
        for (int i = 0, j = nums.size() - 1; i < j; i++, j--) {
            double avg = (nums[i] + nums[j]) / 2.0;
            v.push_back(avg);
        }

        double minVal = v[0];
        for (int k = 1; k < v.size(); k++) {
            if (v[k] < minVal) {
                minVal = v[k];
            }
        }
        return minVal;
    }
};
