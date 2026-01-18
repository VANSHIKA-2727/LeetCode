class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>m ;
        map<int,int>m1 ;
        for(auto x:s){
            m[x]++;
        }
        for(auto x:t){
            m1[x]++;
        }
        if(m==m1)return true ;
        return false ;
    }
};