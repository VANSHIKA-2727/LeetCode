class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;

        for(int x : nums){
            m[x]++;
        }

        int idx = 0;
        for(auto x : m){
            nums[idx++] = x.first;   // overwrite nums
        }

        return idx;
    }
};
