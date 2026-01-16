class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v ;
        for(int x:nums){
            if(x!=val){
                v.push_back(x);
            }
        }
        for(int i=0 ;i<v.size();i++){
            nums[i]=v[i];
        }
        return v.size();
    }
};