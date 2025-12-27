class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,0);
        int ans=1;
        int c=0;
        int temp ;
        for(int i=0 ;i<nums.size();i++){
            if(nums[i]==0)c++;
            else
            ans=ans*nums[i];   
        }
        if(c>1)return v;
        else if(c==1)
        for(int j=0 ;j<nums.size();j++){
            if(nums[j]==0)
            v[j]=ans;
            else
            v[j]=0;
            }
        else{
            for(int j=0;j<n;j++)
       
            v[j]=( ans/nums[j]);
            
        }

        return v;
    }

};