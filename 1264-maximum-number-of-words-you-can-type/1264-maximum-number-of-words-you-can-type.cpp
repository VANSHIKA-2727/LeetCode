class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char,int>m ;
        
        for(char ch : brokenLetters)
            m[ch]++ ;

            int c = 0 , c1 =0;

        for(char x :text ){
            if (m.find(x)!=m.end())c1++ ;
            if(x ==' '){
                if(c1==0)c++ ;
                c1=0 ;
            }
        }
            if(c1==0)c++ ;
            return c ;
        
    }
};