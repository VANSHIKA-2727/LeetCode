class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i =0;i<nums.size();i++){

            if(m.find(nums[i])!=m.end()){
                int x=i-m[nums[i]];
                if(x<=k){
                    return true ;
                }

            }

            m[nums[i]]=i;

           

        }
         return false ;

    }
};