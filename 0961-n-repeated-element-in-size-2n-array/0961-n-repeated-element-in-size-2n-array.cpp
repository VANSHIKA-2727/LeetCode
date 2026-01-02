class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        map<int,int>m ;
        for(auto x:nums){
            m[x]++;
        }
        for(auto c:m){
            if(c.second==n){
                return c.first ;
            }
        }
        return 0 ;
    }
};