class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end ());
        int n = nums.size();
        int x = nums[n-1]-1;
        int y = nums[n-2]-1 ;
        int product = x*y ;
        return product ;

    }
};