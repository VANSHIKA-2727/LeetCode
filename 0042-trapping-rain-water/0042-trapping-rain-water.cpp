class Solution {
public:
    int trap(vector<int>& height) {
        //l-r
        int n = height.size();
        vector<int>v1(n,0);
        v1[0]=height[0];
        for(int i=1 ; i<n ;i++){
            v1[i]=max(v1[i-1],height[i]);
        }
        //r-l
        vector<int>v2(n,0);
        v2[n-1]=height[n-1];
        for(int i=n-2 ;i>=0 ;i--){
            v2[i]=max(v2[i+1],height[i]);
        }
        int s=0 ;
        for(int i=0 ;i<n ;i++){
            s=s+min(v1[i],v2[i])-height[i];
        }
        return s ;
    
    }
};