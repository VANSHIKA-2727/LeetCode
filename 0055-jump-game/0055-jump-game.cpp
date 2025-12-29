class Solution {
public:
    bool canJump(vector<int>& nums) {
      int m=0 ;
      int n =nums.size();
      int s ;
      for(int i=0;i<=m;i++){
        s=i+nums[i];
        m=max(m,s);
        if(m>=(n-1))return true;
        

      }  
      return false;
    }
};