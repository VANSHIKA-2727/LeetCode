class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int found ;
       int add = 0;
       int sum =0;
       int n= nums.size();
       for ( int i=0;i<n; i++){
            sum += nums[i];
       }
      
    for (int i = 0; i <n; i++) {
        add += i;
    }
    add = add+n ;

       found = add - sum ;
       return found ;
        
    }
};