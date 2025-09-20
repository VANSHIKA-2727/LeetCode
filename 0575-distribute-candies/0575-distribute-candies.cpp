class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int,int>m ;
        for(int x:candyType){
            m[x]=1 ;
        }
        int n = candyType.size()/2 ;
        int y ;

        if(m.size()<n){
            y=m.size();
        }
        else{
            y=n ;
        }
return y ;
        
    }
};