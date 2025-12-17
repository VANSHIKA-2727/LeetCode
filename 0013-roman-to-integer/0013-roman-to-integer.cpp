class Solution {
public:
int roman (char c){
    if(c=='I')return 1 ;
    if(c=='V')return 5 ;
    if(c=='X')return 10 ;
    if(c=='L')return 50 ;
    if(c=='C')return 100 ;
    if(c=='D')return 500 ;
    else 
    return 1000 ;

}
    int romanToInt(string s) {

        int ss =0 ;
        for (int i = 0 ;i<s.length();i++){
            if(i< s.length()-1  && roman (s[i])< roman (s[i+1])){
                ss= ss-roman(s[i]);
            }
            else{
                ss= ss+roman(s[i]);
            }
        }
        return ss ;

    }
};