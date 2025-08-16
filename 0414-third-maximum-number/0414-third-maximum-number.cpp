class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        auto it = std::unique(nums.begin(), nums.end());
        nums.erase(it , nums.end());

        int n = nums.size();

        int max = nums[n-1];
        if(n<3){
            return max ;
        }
        return nums[n-3];
    }
};