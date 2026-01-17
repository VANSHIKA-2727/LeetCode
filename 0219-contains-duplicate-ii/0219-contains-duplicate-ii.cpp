class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       
       unordered_map<int,int>m;
      for(int i=0;i<nums.size();i++)
      {
        auto x=m.find(nums[i]);
        if(x!=m.end()){
            if(i- (x->second)<=k)return true;
        }
        m[nums[i]]=i;
      }  
      return false;

    }
};