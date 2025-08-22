class Solution {
public:
    int bitwiseComplement(int n) {
       int c =1 ;
       int temp = n ;
       while(n>1){
        n = n/2 ;
        c++;
       } 
       int p = pow(2,c)-1;

       return p^temp ;
    }
};