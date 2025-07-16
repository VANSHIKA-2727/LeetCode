class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
    map<char,int>m;
        map<char,int>mm;
        int c=0,ans=0;
        for(char ch:chars)m[ch]++;
        mm=m;
        for(string s:words)
        {
            c=0;
            for(char ch:s)
            {
                if(m.find(ch)!=m.end()&& m[ch]!=0){c++;
                m[ch]--;}
                else
                break;
            }
            if(c==s.length())ans+=c;
            m=mm;
        }
        return ans;
    }
};