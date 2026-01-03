class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<int,int>m1 ;
        for(auto x:ransomNote){
            m1[x]++;
        }

        map<int,int>m2 ;
        for(auto x:magazine){
            m2[x]++;
        }

        for(auto x:m1){
        auto y= m2.find(x.first);
        if(y!= m2.end()&& x.second<=y->second)continue;
        else {
            return false ;
        }
        }
return true ;
        
    }
};