class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m ;
        for(int x:nums){
            m[x]++;
        }
        vector<int>v;
        for(auto x:m){
            if(x.second >=1){
                v.push_back(x.first);
            }
        }
        
        for(int i=0 ;i<v.size();i++){
            nums[i]=v[i];
        }
        return v.size();
    }
};