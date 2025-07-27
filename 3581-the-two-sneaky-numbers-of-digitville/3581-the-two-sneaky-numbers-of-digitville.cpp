class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>m ;
        for(int i= 0 ;i<nums.size();i++){
           m[nums[i]]++;
        }
        vector<int>v ;

        for(auto x = m.begin();x!=m.end();x++){
            if(x->second>1){
                v.push_back(x->first);
            }
        }
        return v ;
    }
};