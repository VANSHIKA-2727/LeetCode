class Solution {
public:
    void rotate(vector<vector<int>>& ma) {
int i,j,temp,k;
        int n=ma.size();
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
    }
};