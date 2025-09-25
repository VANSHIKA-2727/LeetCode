class Solution {
public:
    bool hasAlternatingBits(int n) {
        int bit = n&1 ;// getting the last bit 
        while(n>0){
            if((n&1)!=bit) // the last bit is equal bit or not 
                return false ;
                bit=!bit ;// reversing the vit basically where we have 0 will shift it to 1 
                n= n>>1 ; // left shift ( removing the last bit )
            
        }
        return true ;
    }
};