class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>m;
        for(char ch:text)m[ch]++;
        int ans=0,c=0; string st="balloon";
        while(1)
        {
            c=0;
            for(char ch:st)
            {
                if(m.find(ch)!=m.end() && m[ch]!=0)
                {
                    c++;m[ch]--;
                }
                else break;
            }
            if(c==7)ans++;
            else 
            break;
        }
        return ans;
    }
};