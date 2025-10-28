class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        vector<bool> cols(n, false);
        vector<bool> diag1(2*n-1, false);  // row+col
        vector<bool> diag2(2*n-1, false);  // row−col + (n−1) to keep index non-negative
        backtrack(0, n, cols, diag1, diag2, count);
        return count;
    }

private:
    void backtrack(int row, int n,
                   vector<bool> &cols,
                   vector<bool> &diag1,
                   vector<bool> &diag2,
                   int &count) {
        if (row == n) {
            count++;
            return;
        }
        for (int col = 0; col < n; col++) {
            int d1 = row + col;
            int d2 = row - col + (n - 1);
            if (cols[col] || diag1[d1] || diag2[d2]) {
                continue;
            }
            cols[col] = diag1[d1] = diag2[d2] = true;
            backtrack(row + 1, n, cols, diag1, diag2, count);
            cols[col] = diag1[d1] = diag2[d2] = false;
        }
    }
};
