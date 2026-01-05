class Solution {
public:
int roman (char ch ){
    if(ch=='I')return 1;
    if(ch=='V')return 5 ;
     if(ch=='X')return 10 ;
      if(ch=='L')return 50 ;
       if(ch=='C')return 100 ;
        if(ch=='D')return 500 ;
        return 1000;

    
}
    int romanToInt(string s) {
        int ss =0 ;
        for(int i=0 ;i<s.length() ;i++){
            if(i<s.length()-1 && roman(s[i])<roman(s[i+1]))
            ss= ss-roman(s[i]);
            else{
            ss=ss+roman(s[i]);
            }
        }
        return ss ;
    }
};