class Solution {
public:
    int minOperations(vector<string>& logs) {
       vector<string>v;
        for(string c:logs )
        {
            if(!v.empty() && c=="../" )
            v.pop_back();
            else if(c=="./" || c=="../"){}
            else
            v.push_back(c);
        }
       
        return v.size(); 
    }
};