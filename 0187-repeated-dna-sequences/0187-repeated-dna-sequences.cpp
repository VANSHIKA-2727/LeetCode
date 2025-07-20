class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
     string st=s.substr(0,10);
     map<string , int>m;
     m[st]=1;
      for(int i =10 ; i<s.length();i++){
        st=st+s[i];
        st=st.substr(1,10);
        m[st]++ ;

      }

      vector<string>v;
      for(auto x=m.begin();x!=m.end();x++){
        if(x->second>1){
            v.push_back(x->first);
        }
      }
        return v ;
    }
};