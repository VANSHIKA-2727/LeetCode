class Solution {
public:
    int countDigits(int num) {
        vector<int >v;
        int temp = num ;
        int c =0 ;
        while(num!=0){
        int rem = num%10 ;
        num =num/10 ;
        v.push_back (rem) ; 
        }
        
        for (int i=0 ;i<v.size();i++){
            if(temp % v[i]==0){
                c++ ;
            }
        }

        return c ;
    }
};