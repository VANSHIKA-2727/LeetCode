class Solution {
public:
    int hammingWeight(int n) {
        // int rem ;
        // vector<int>v ;
        // while(n>0){
        // rem = n%2 ;
        // v.push_back(rem );
        // n=n/2 ;}
        
        // int c =0 ;

        // for (int i=0 ;i<v.size();i++){
        //     if (v[i]!=0){
        //         c++ ;
        //     }
        // }

        // return c ; 
        int c =0;

        while(n!=0){
            c++ ;
            n = n&(n-1);
            
        }

        return c ;
    }
};