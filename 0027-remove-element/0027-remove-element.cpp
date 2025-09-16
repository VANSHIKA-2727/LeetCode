class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v ;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                v.push_back(nums[i]);
            }
        }
        int n = v.size();
        for (int i = 0; i < n; ++i) nums[i] = v[i]; // copy kept elements into nums
        return n;
    }
};
