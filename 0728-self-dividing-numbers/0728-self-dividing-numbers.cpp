class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
       vector<int>v ;
       for(int i = left;i<=right ;i++){
        int f =0 ;
        for(int j=i ;j>0 ;j=j/10){
            int digit = j%10 ;
            if(digit ==0 || i%digit!=0){
                f=1 ;
                break ;
            }
        }
            if(f==0){
                v.push_back(i);}
            
        

       }
       return v ;
    }
};