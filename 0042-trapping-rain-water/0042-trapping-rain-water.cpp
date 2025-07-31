class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        vector<int>l(n);
        vector<int>r(n) ;
        l[0]=nums[0];
        r[n-1]=nums[n-1];

        int res =0 ;

        for (int i =1 ;i<n;i++){
            l[i]=max(nums[i],l[i-1]);
        }

        for(int i=n-2 ;i>=0;i--){
            r[i]=max(nums[i],r[i+1]);
        }

        for(int i=0 ;i<n ;i++){
         res = res+(min(l[i],r[i])-nums[i]) ;
        }

        return res ;

    }
};