class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int c =0  ;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size( );i+=2){
            c=c+nums[i];
        }
        return c ;
    }
};