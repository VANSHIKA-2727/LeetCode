class Solution {
public:
    bool canWinNim(int n) {
        n=n%4 ;
        if ( n==0)return false ;
        if (n<4) return true ;
         return false ;
    }
};