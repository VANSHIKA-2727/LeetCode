class Solution {
public:
    void reverse(string &st,int s,int e)
{
    for(int i=s,j=e;i<j;i++,j--)
    {
        char c=st[i];
        st[i]=st[j];
        st[j]=c;
    }
}
    string reverseStr(string s, int k) {
       string st="";
       string wd="";
       int i=0,n=s.length(),j=0;
       
      for(i=0;i<n;i=i+ 2*k){
        if(i+k<n)
        reverse(s,i,i+k-1);
        else
        reverse(s,i,n-1);
       
      }
       return s;
    }
    
};