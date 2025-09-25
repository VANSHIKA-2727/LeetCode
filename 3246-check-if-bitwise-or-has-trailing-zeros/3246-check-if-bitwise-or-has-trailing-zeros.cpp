class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int c =0 ;
        for( int x:nums){
            if(x%2==0 )
                c++ ;
            }

            if(c>=2)return true  ;
            else 
            return false ;
            
        
    
    }
};