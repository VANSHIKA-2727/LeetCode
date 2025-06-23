class Solution {
public:
    int maxSubArray(vector<int>& a) {
      int res= a[0 ], s= 0;
      for ( int i=0;i < a.size();i++){
        s =max(a[i]+s , a[i]);
        res = max (res , s );
      }

      return res ;
    }
};