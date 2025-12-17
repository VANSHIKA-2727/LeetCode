class Solution {
public:
    int countSegments(string s) {
        vector<string>v ;
        string temp = "";
            for(int i=0 ;i<s.length();i++){
                if(s[i]!=' '){
                     temp += s[i];
                }
                else {
                if (!temp.empty()) {
                    v.push_back(temp); 
                    temp = "";
                } 
            }}

             if (!temp.empty()) {
            v.push_back(temp);
        }
        return v.size(); ;
    } 
};