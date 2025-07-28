class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>vv;
        vector<int>v;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;i++)
    {
        if(i>0 && nums[i]==nums[i-1])continue;
        int t=-nums[i];
        int j=i+1,k=n-1;
        while(j<k){
            if(nums[j]+nums[k]==t)
            { 
                v.clear();
                v.push_back(nums[i]);
                 v.push_back(nums[j]); v.push_back(nums[k]);
                 vv.push_back(v);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                } else if (nums[j]+nums[k]<t) {
                    j++;
                } else {
                    k--;
                }
        }
    }
return vv;
    }
};