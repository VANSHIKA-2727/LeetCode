class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m1;
        for(char c:ransomNote){
            m1[c]++;
        }

        map<char,int>m2;
        for(char c:magazine){
            m2[c]++;
        }
        for(auto x:m1)
        {
            auto y=m2.find(x.first);
            if(y!=m2.end() && x.second<=y->second)continue;
            else return false;
        }
        return true;


    }
};