class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>m ;
        int c = 0;   // ✅ initialize

        for(char ch:allowed){
            m[ch]=1 ;   // ✅ build map
        }

        for(string st :words){   // ✅ moved outside
            int f=0;
            for(char ch:st){
                if (m.find(ch) == m.end()) {f=1;break;}
            }
            if (f==0)c++;
        }

        return c ;  
    }
};
