class Solution {
public:
    int reverseBits(int n) {

        uint32_t s =0 ;
        int c =32 ;
        while(c>0){
            s=s<<1 ;
            s+=(n&1);
            n =n >>1 ;
            c-- ;
        }

     return s ;

        
    }
};