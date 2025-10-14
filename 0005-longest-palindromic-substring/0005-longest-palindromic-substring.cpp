class Solution {
public:
int start =0 , maxi ;
   void check(string s,int i,int j){
    
        while(i>=0 && j<s.length () && s[i]==s[j]){
            i-- ;j++ ;
        }
        int l = j-i-1 ;
        if(l>maxi){
            maxi = l ;
            start=i+1 ;
        }
   }
    string longestPalindrome(string s) {
       int len = s.length();
       if(len<2){
        return s ;
       } 
       for(int i=0 ;i<len-1 ;i++){
        check(s,i,i);
        check(s,i,i+1);
       }
       return s.substr(start , maxi);

    }
};