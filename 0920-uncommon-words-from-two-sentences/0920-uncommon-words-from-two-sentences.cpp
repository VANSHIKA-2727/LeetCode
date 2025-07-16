class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        s1=s1+" ";
        s2=s2+" ";
        string wd;
        unordered_map<string,int>m;
        vector<string>v;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=' ')wd=wd+s1[i];
            else { m[wd]++; wd="";}
        }
        for(int i=0;i<s2.length();i++)
        {
            if(s2[i]!=' ')wd=wd+s2[i];
            else { m[wd]++; wd="";}
        }
        for(auto x=m.begin();x!=m.end();x++)
        {
            if(x->second==1)v.push_back(x->first);
        }
    return v;
    }
};