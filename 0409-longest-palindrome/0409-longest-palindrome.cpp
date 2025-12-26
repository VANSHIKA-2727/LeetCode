class Solution {
public:
    int longestPalindrome(string s) {
        int c=0 ,s1=0 ;
        map<int,int>m ;
        for(int i=0 ;i< s.length();i++){
            m[s[i]]++;
        }
        for(auto x:m){
            if(x.second%2==0){
                s1=s1+x.second ;
                
            }
            else{
                s1=s1+x.second-1;
                c=1;
            }
        }
        if(c==1)return s1+1;
        return s1;
    }
};