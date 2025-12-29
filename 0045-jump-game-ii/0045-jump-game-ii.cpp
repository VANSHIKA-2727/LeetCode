class Solution {
public:
    int jump(vector<int>& nums) {
        int n =nums.size();
        int m =0 ;
        int s;
        int c=0 ,c1=0;
        for(int i=0;i< n-1;i++){
            s=i+nums[i];
            m=max(m,s);
            if(i==c1){
                c++;
                c1=m;
            }
        }
        return c;
    }
};