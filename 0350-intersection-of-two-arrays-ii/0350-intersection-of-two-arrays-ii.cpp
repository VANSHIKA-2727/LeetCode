class Solution {
public:
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        vector<int> v;
        sort(n1.begin(), n1.end());
        sort(n2.begin(), n2.end());

        int n = n1.size();
        int m = n2.size();
        int i = 0, j = 0;

        while (i < n && j < m) {   
            if (n1[i] == n2[j]) {
                v.push_back(n1[i]);
                i++;
                j++;
            } 
            else if (n1[i] < n2[j]) {
                i++;
            } 
            else {
                j++;
            }
        }
        return v;
    }
};
