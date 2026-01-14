class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        /* map<int,int>m;
       vector<int>v;
       int n=numbers.size();
       for(int i=0;i<n;i++)
       {
        auto x=m.find(target-numbers[i]);
        if(x!=m.end())
        {v.push_back(x->second+1);
        v.push_back(i+1);
        return v;
        }
        m[numbers[i]]=i;
       }
return v;*/
        int n= nums.size();
       int i=0 ; int j=n-1 ; 
       vector<int>v ;
       while(i<j){
        if(target==nums[i]+nums[j]){
            v.push_back(i+1 );
            v.push_back(j+1);
            break ;
        }
        if( nums[i]+nums[j]>target){
            j-- ;
        }
        else{
            i++ ;
        }
       }
       return v ;
    }
};