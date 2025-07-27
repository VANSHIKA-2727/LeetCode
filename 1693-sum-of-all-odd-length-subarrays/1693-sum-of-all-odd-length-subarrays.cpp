class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       
        int sum=0 ;
        int c =0 ;
        for (int i=0 ;i< arr.size();i++){
            int s=0 ;
            for(int j=i ;j<arr.size();j++){
                 s = s +arr[j];
                 c++ ;

                 if(c%2 != 0 ){
                    sum = sum+s ;
                 }
            } }
              return sum ;
    }
  
};