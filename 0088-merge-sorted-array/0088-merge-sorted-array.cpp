class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
int i,j;
        for(i=0;i<n;i++)
        {
            j=m-1;
            while(j>=0 && nums2[i]<nums1[j])
            {
                nums1[j+1]=nums1[j];j--;
            }
            nums1[j+1]=nums2[i];
            m++;
        }}
};