class Solution {
public:
    int maxProfit(vector<int>& a) {
        int ma =0 ,min =9999 ;
        for(int i=0 ;i<a.size();i++){
        if(a[i]< min){
            min=a[i];
        }
        else {
            int d = a[i]-min ;
            ma =max(ma , d);
        }
        }
        return ma ;
    }
};