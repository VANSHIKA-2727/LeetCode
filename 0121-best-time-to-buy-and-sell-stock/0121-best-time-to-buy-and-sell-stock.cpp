class Solution {
public:
    int maxProfit(vector<int>& v) {

        if(v.size()<2){
            return 0 ;
        }
        
        int mini =v[0];
        int maxi = v[1]-v[0];

        for (int i=1 ;i<v.size();i++){
            if(maxi<(v[i]-mini))
            {
                maxi=(v[i]-mini);
            }
            if(v[i]<mini){
                mini =v[i];
                }
        }
        if(maxi<0)return 0 ;

        return maxi ;
        
    }
};