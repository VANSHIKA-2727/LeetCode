class Solution {
public:
    int smallestNumber(int n) {
        int c =1 ;
        if(n==1) return 1 ;
        while(1){
            if(n<c)break ;
            c=c*2 ;
        }
        
        return c -1 ;
    }
};