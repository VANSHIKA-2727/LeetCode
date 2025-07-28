class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int min =99999;
        int sum =0 ,i , s1 =0 ;
        int b , e ;
        for(i=0 ; i<nums.size()-2;i++){
            b=i+1 ;
            e = nums.size()-1 ;

            while (b<e){
                sum = nums[i]+nums[b]+nums[e];
                int d =abs(sum-target);
                if(d<min){
                    min = d ;
                    s1 = sum ;
                }

                if(sum<target)b++ ;
                else if(sum>target)e-- ;

                else return sum ;

            
            }
        }

        return s1 ;
    }
};