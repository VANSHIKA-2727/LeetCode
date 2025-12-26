class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v;
        int n=nums.size();
        int p = n-k%n;
        for(int i=p ;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        for(int i=0 ;i<p;i++){
            v.push_back(nums[i]);
        }
        int i=0 ;
        for(int x:v){
            nums[i++] = x;

        }
    }
};