class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>m;
       vector<int>v;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
        auto x=m.find(target-nums[i]);
        if(x!=m.end())
        {v.push_back(x->second);
        v.push_back(i);
        return v;
        }
        m[nums[i]]=i;
       }
return v;
    
    }

};