class KthLargest {
public:
int k ;
vector <int>nums; 
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int x:nums)this->nums.push_back(x);
        sort(this->nums.begin(),this->nums.end());
        
    }
    
    int add(int val) {
        nums.push_back(val );
        int n = nums.size()-2;
        while(n>=0 && val<nums[n]){
            nums[n+1]=nums[n];
            n--;
        }
        nums[n+1]=val ;
        return nums[nums.size()-k];
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */