class Solution {
public:
int bits(int n)
    {
        int a=0;
        while(n>0)
        {
            a++;
            n=n&(n-1);
        }
        return a;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>m;
        vector<int>v;
        for(int x:arr)
        {
            m.push_back({bits(x),x});
        }
        sort(m.begin(),m.end());
        for(int i=0;i<m.size();i++)
        v.push_back(m[i].second);
        return v;
    }
    
};