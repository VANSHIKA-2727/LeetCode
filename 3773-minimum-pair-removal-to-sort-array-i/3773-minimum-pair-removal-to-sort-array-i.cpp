class Solution {
public:
   bool checksort(vector<int>n)
    {
        vector<int>v=n;
        sort(n.begin(),n.end());
        if(v==n)return true;
        else
        return false;
    }
    int minimumPairRemoval(vector<int>& nums) {


        int c=0;
    while(!checksort(nums))
    {
        vector<pair<int,int>>mn;
        for(int i=0;i<nums.size()-1;i++)
        {
            mn.push_back({nums[i]+nums[i+1],i});


        }
        sort(mn.begin(),mn.end());
        nums.erase(nums.begin()+mn[0].second);
        nums.erase(nums.begin()+mn[0].second);
        nums.insert(nums.begin()+mn[0].second,mn[0].first);
        c++;
       
    }        
        return c;
    }
};