class Solution {
public:
    int minStartValue(vector<int>& nums){
     
      int n = nums.size();
      vector <int>v(n,0);
      v[0]=nums[0];
      int mi = v[0];
      for ( int i =1;i<n;i++){
        v[i]=v[i-1]+ nums[i];
        mi=min(v[i] ,mi);
      }
        int x= 1-mi ;
        if ( x<=0)return 1 ;
         else 
          return x ;
    }
   

};