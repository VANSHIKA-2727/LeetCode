class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>v(256);
       int n=s.size();
       int l=0 ,r=0 , maxi=0 ;

       while(l<n){
        if(r<n && v[s[r]]==0){
            v[s[r++]]++;
            maxi=max(maxi,r-l);

        }
        else{
            v[s[l++]]--;
        }
       }
       return maxi ;
    }
};