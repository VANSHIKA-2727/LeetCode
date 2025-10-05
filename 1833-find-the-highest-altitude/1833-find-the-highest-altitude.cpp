class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>v (n+1,0);
        for(int i=0 ;i<n ;i++){
            v[i+1]=v[i]+gain[i];
           
        }

        sort(v.begin(),v.end());
            
        return v.back();
    }
};