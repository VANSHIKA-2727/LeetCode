class Solution {
public:
    int lengthOfLastWord(string s) {
        int n =s.length();
        int c=0;
        int i=n-1;
        while(s[i]==' ')i-- ;
        while(i>=0)
        {
            if(s[i] ==' '){return c;
            }
            else {
            i--;
            c++ ;
            }
        }
        return c ;
    }
};