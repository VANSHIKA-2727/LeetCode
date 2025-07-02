class Solution {
public:
    int possibleStringCount(string word) {
    int s =0 ;
    for ( int i=1 ; i<word.length();i++){
        if ( word[i]== word[i-1]){
            s=s+1 ;
        }
    } 
    return s+1;
    }
};