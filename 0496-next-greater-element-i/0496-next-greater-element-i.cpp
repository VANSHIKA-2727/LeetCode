class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int x :nums1 ){
            int f=0 ,i;
            for(i=0 ;i<nums2.size();i++){
                if(nums2[i]==x){
                    f=1 ;
                    break ;
                }}
                if(f==1)
                {
                    for( ;i<nums2.size();i++){
                        if(nums2[i]>x){
                            v.push_back(nums2[i]);
                            break ;
                        }}
                        if(i==nums2.size()){
                            v.push_back(-1);
                        }}
                        else{
                            v.push_back(-1);
                        }
                
            }
        
        return v ;
    }
};