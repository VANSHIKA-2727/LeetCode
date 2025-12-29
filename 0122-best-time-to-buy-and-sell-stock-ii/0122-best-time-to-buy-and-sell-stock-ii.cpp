class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0] ;int profit=0 ;int sum =0 ;
        for(int j=1;j<prices.size();j++){
            if(prices[j]<mini)
            mini=prices[j];

            else{
                profit=prices[j]-mini;
                sum=sum+profit ;
                mini=prices[j];

            }
        }
        return sum ;
    }
};