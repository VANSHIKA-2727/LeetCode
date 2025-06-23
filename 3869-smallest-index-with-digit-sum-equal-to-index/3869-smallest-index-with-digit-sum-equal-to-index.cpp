class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        for ( int i =0; i<nums.size() ; i++){
            int s = nums[i];
            int sum =0; 
            while ( s >0){
                sum = sum + (s%10) ;
                s=s/10 ;
            }
            
            if ( sum ==i){
                return i ;
            
            }
        }
        return -1 ;
    }
};