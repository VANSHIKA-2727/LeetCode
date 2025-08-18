class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int>v;
        for(int i=0; i<n; i++){
         v.push_back(nums[i]);     // from first half
         v.push_back(nums[i+n]);   // from second half
}

        return v ;
    }
};