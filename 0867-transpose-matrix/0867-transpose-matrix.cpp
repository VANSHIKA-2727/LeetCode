class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {

        int rows = m.size();
        int cols = m[0].size();

        vector<vector<int>> t(cols, vector<int>(rows));

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                t[j][i] = m[i][j];
            }
        }

        return t;
    }
};
