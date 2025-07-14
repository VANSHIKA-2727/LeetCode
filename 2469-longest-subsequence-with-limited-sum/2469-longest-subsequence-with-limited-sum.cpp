class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>v(n,0);vector<int>v1;
        v[0]=nums[0];
        int i;
        for(i=1;i<n;i++)v[i]=v[i-1]+nums[i];
        for(int x:queries){
        for(i=n-1;i>=0;i--)
        {
            if(x>=v[i])break;
        }
        if(i==-1)v1.push_back(0);
        else v1.push_back(i+1);
        }
        return v1;
    }
};