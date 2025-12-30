class Solution {
public:
    int hIndex(vector<int>& c) {
        int n =c.size();
        int s=0;
        vector<int>v(n+1,0);
         for (int x : c) {
            if (x >= n) v[n]++;
            else v[x]++;
        }
        for(int i=n ;i>=0;i--){
            s=s+v[i];
               if(s>=i)return i ;
           
        }
      ;
        return 0 ;
    }
};