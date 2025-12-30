class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='('||c=='{'||c=='['){st.push(c);continue ;}
            if(st.size()==0)return false ;
            if(st.top()=='(' && c==')')st.pop();
            else if(st.top()=='{' && c=='}')st.pop();
            else if(st.top()=='[' && c==']')st.pop();
            else
            return false ;
        }
        if(st.size()==0)return true ;
        return false ;
    }
};