class Solution {
public:
    bool findRotation(vector<vector<int>>& ma, vector<vector<int>>& target) {
        int i,j,temp,k;
        int n=ma.size();
        int t=1;
        while(t<=4){
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                temp=ma[i][j];
                ma[i][j]=ma[j][i];
                ma[j][i]=temp;
            }
        }
        for(i=0;i<n;i++){
            for(j=0,k=n-1;j<k;j++,k--){
                temp=ma[i][j];
                ma[i][j]=ma[i][k];
                ma[i][k]=temp;
            }
        }
       if(ma==target)return true;
        t++;
        }
        return false;
        
    }
};