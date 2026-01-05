class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        int n= nums.size()/3;
        map<int,int>m ;
        for(int x:nums){
            m[x]++;
        }
        for(auto x:m){
            if(x.second>n)
            v.push_back(x.first);
        }
        return v;
    }
};