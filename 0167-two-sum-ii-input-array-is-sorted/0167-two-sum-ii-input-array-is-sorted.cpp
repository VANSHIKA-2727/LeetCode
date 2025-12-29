class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0 ;
        int n=nums.size();
        int j=n-1;
        vector<int>v;
        while(i<j){
             if(target==nums[i]+nums[j]){
                v.push_back(i+1);
                v.push_back(j+1);   
                break;
            }
            if(nums[i]+nums[j]<target) i++ ;
            else
            j-- ;

           
        }
         return v ;
    }
};