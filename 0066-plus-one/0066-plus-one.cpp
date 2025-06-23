class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
    int c =1;
    for(int i=a.size()-1;i>=0;i--)
    {
        int s=a[i]+c;
        c=s/10;
        a[i]=s%10;
    }
    if(c==1)
    a.insert(a.begin(),c);
    return a;
    }
};