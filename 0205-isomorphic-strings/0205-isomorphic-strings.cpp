class Solution {
public:
    bool isIsomorphic(string s, string t) {
    char m1[256] = {0};
    char m2[256] = {0};

    int n= s.length() ;
    int m = t.length();


    if(n != m){
        return false;
    }

    for(int i = 0; i < n; i++){
        if(m1[s[i]] != m2[t[i]]){
            return false;
        }
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
    }
};