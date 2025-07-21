class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char ,int> m; 
        int i=0, j=0 ;
        int n = s.size();
        int y = t.size();
        while(i<n && j<y ){
            m[s[i]]++ ;
            m[t[j]]-- ;
            i++ ; j++ ;
        }

        while(i<n){
            m[s[i]]++ ; i++ ;
        }

        while(j<y){
            m[t[j]]-- ; j++ ;
        }
        
        for(auto x=m.begin() ; x!=m.end();x++){
            if(x->second!=0){
                return x->first ;
            }
        }
        return ' ';
    }
};