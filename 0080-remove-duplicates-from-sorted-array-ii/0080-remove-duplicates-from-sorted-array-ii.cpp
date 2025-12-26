class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //    int c=0;
    //    vector<int>v;
    //    v.push_back(nums[0]);
    //    c=1;
    //    for(int i=1;i<nums.size();i++)
    //    {
        
    //     if(nums[i-1]!=nums[i])
    //     {
    //         c=1;
    //     }
    //     else 
    //     c++;
    //     if(c<=2)
    //         v.push_back(nums[i]);

    //    }

    map<int,int>m ;
    for(int i=0 ;i<nums.size();i++){
        m[nums[i]]++;
    }
    vector<int>v ;
    for(auto x:m){
        if(x.second>1){
            v.push_back(x.first);
             v.push_back(x.first);
        }
        else{
             v.push_back(x.first);
        }
    }

       int i=0;
       for(int y:v)
       nums[i++]=y;
      return i;
    }
};