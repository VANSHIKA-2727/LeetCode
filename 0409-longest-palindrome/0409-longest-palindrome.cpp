class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int>m ;
        int l =0 ;
        for(char c:s){
            if(m.find(c)!= m.end()){
                m.erase(c);
                l=l+2 ;
            }
            else{
                m[c]++ ;

            }
        }

        if(!m.empty()){
            l=l+1;
        }

        return l;
    }
};