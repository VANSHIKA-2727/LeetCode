class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        
        int c = 0 ;
        for(int x : nums){
            if(x%2 ==0){ c=c|x ;
            }
        }
       return c ;

    }
};