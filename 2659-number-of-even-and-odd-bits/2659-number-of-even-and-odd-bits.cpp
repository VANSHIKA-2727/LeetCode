class Solution {
public:
    vector<int> evenOddBit(int n) {
        int e =0 ,o=0 ;
        int c=0 ;
        while(n>0){
            if(c%2==0 && (n&1)==1)e++;
            else if ( c%2 !=0 && (n&1)==1)o++;
        
        n=n>>1 ;
        c++ ;}
        vector<int >v ;
        v.push_back(e);
        v.push_back(o);
        return v ;
    }
};