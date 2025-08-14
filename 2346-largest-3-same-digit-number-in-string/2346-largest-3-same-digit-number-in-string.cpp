class Solution {
public:
    string largestGoodInteger(string num) {
        int c=1,l=-1;
        for(int i=1;i<num.length();i++)
        {
            if(num[i]==num[i-1]){
                c++;
                if(c==3 && (num[i]-'0')>l)
                l=num[i]-'0';
            }
            else {c=1;}
        }
        if(l==-1)return "";
        //cout<<(char)(l+48);
        string s="";
        s=s+(char)(l+48)+(char)(l+48)+(char)(l+48);
        return s;
    }
};