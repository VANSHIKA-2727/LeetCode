class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c = 0 ;
        for (int i=0 ;i<nums.size();i++){
           
            if(nums[i]%3==0){continue ;}

            int temp = nums[i]-1 ;
            int x = nums[i]+1 ;
         if (temp %3==0 || x%3==0)
        {
            c=c+1; }
            
            
        else {c=c+2 ;}
        
        }
        return c ;
    }
};