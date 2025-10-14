class Solution {
public:
    int maxRepeating(string seq, string wd) {
        int n=seq.length();

        int m=wd.length();
        int c=0,maxi=0;
        if(m>n)return 0;
        else {
            for(int i=0;i<n-m+1;i++){
                int f=0;
                for(int j=0;j<m;j++){
                    if(wd[j]!=seq[i+j])
                    {
                        f=1;break;
                    }
                }
                if (f == 0) {
                    c = 0;
                    int k = i;
                    while (k + m <= n && seq.substr(k, m) == wd) {
                        c++;
                        k += m;
                    }
                    maxi = max(maxi, c);
                }
            }
        }
        return maxi;
        
    }
};