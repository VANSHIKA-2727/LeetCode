class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0,l=0,c=0;
        for(char ch:s){
            if(ch=='R')r++;
            else
            l++;
            if(l==r){c++;l=0;r=0;}
        }
        return c;
    }
};