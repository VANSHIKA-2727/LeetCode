class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long long s=0;
        vector<int>v(n+1,0);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
             { c++; s=s+c;}
            else c=0;
        }
        
        return s;
    }
};