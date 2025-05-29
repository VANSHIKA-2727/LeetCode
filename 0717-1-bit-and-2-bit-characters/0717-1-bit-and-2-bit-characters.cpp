class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();int i;
        if(n==1 && bits[n-1]==0)
        return true;
        if(n==1 && bits[n-1]==1)
        return false;
        
        for(i=0;i<n-1;)
        {
            if(bits[i]==1)
            i+=2;
            else
            i+=1;
        }
        if(i==n-1)
        return true;
        else
        return false;}
};