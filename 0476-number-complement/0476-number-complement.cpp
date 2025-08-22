class Solution {
public:
    int findComplement(int num) {
        int c=1 ;
        int t=num ;
        if(num==1){
            return 0 ;
        }

        while(num>1){
            num=num/2 ;
            c++ ;
        }
        int p = pow(2,c)-1;

        return p^t;
        

    }
};