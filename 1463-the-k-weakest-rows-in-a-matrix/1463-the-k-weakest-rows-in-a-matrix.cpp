class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       vector<pair<int,int>>v;
        vector<int>n;
        for(int i=0;i<mat.size();i++)
        {
            int c=0;
            for(int j=0;j<mat[i].size();j++)
            c=c+mat[i][j];
            v.push_back({c,i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++)
        n.push_back(v[i].second);
        return n;
        }
        
};