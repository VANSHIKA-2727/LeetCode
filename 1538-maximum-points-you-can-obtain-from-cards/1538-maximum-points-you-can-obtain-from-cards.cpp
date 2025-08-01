class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n = v.size();
       
        int sum = v[0];
        int mini= 1 ;

        for(int i=1 ;i<k;i++){
            sum = sum +v[i];
        }

        int maxi =sum;

        int x= k-1 ;
        int j =n-1 ;

        for(int i=0 ;i<k;i++){
            sum = sum - v[x];
            sum =sum + v[j];
            maxi = max(maxi , sum);
            x-- ;
            j-- ;

        }
    
     return maxi   ;
    }
};