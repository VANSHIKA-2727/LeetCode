class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int>s;
       map<int,int>m ;
       for(int i=nums2.size()-1;i>=0;i--){
        while(!s.empty()&& s.top()<nums2[i])s.pop();

        if(s.empty()) m[nums2[i]]=-1;
        else
        m[nums2[i]]=s.top();
        s.push(nums2[i]);
       } 

       vector<int>v;
       for(int x:nums1)v.push_back(m[x]);
       return v ;
    }

};