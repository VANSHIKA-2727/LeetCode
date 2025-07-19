class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size(),s=0,p=k;
         vector<int>vv;
       if(k==0)
        {
            vector<int>v(n,0);return v;
        }
        if(p<0){
        reverse(code.begin(),code.end());k=k*-1;}
            for(int i=0;i<k;i++)code.push_back(code[i]);
            for( int i=1;i<=k;i++)
            s=s+code[i];
            vv.push_back(s);
            for(int i=k+1,j=1;i<n+k;i++,j++)
            {
                s=s+code[i];s=s-code[j];vv.push_back(s);
            }
        if(p<0)
        reverse(vv.begin(),vv.end());
        return vv;
    }
};