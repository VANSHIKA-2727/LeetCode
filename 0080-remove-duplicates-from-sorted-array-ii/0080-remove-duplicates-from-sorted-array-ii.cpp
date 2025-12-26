class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int c=0;
       vector<int>v;
       v.push_back(nums[0]);
       c=1;
       for(int i=1;i<nums.size();i++)
       {
        
        if(nums[i-1]!=nums[i])
        {
            c=1;
        }
        else 
        c++;
        if(c<=2)
            v.push_back(nums[i]);

       }
       int i=0;
       for(int x:v)
       nums[i++]=x;
      return i;
    }
};