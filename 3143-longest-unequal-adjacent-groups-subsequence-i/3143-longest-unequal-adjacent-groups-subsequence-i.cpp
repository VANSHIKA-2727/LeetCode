class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& wd, vector<int>& gp) {
        vector<string>v;
        v.push_back(wd[0]);
        int p=gp[0];
        p=!p;

        for(int i=1 ;i<wd.size();i++){
            if(p==gp[i]){
                v.push_back(wd[i]);
                p=!gp[i];
            }
        }
        return v ;
    }
};