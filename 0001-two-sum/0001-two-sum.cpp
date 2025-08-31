class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> arr;   // (value, original_index)

        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end()); // sort by value

        int i = 0;
        int j = n - 1;
        vector<int> v;

        while (i < j) {
            int sum = arr[i].first + arr[j].first;

            if (sum == target) {
                v.push_back(arr[i].second);
                v.push_back(arr[j].second);
                return v;   
            }
            else if (sum < target) {
                i++;
            }
            else {
                j--;
            }
        }
        return v;  
    }
};
