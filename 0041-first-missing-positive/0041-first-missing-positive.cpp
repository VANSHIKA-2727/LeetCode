// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n = nums.size();
//         if(n==1)return 2;
//         vector<int>v;
//         for(int i=0 ;i<n ;i++){
    
//         if(nums[i]<0)continue ;
//         else{
//             v.push_back(nums[i]);
//         }
//         }
//         int ans =0 ;
//         for(int i=0 ;i<=n ;i++){
//             ans = ans +i ;
//         }
//         int sum =0 ;
//         for(auto x:v){
//             if(x>n)return 1;
//             sum=sum+x;
//         }

       
//         return ans-sum ;
//     }
// };

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<bool> present(n + 1, false);

        for (int x : nums) {
            if (x >= 1 && x <= n) {
                present[x] = true;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (!present[i]) return i;
        }

        return n + 1;
    }
};
