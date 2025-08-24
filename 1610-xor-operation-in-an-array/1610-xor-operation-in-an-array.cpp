class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>v(n,0);
        int x =2, y= start  ;
        v[0]=start ;
        for(int i=1 ;i<n ;i++){
            v[i] =2*i + start  ;
            y=y^v[i];
         
        }
        return y ;
    }
};