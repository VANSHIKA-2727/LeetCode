class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int R = grid.size();
        if (R < 3) return 0;
        int C = grid[0].size();
        if (C < 3) return 0;
        
        int count = 0;
        for (int i = 0; i <= R - 3; i++) {
            for (int j = 0; j <= C - 3; j++) {
                if (isMagic(grid, i, j)) {
                    count++;
                }
            }
        }
        return count;
    }
    
private:
    bool isMagic(vector<vector<int>>& g, int r, int c) {
      
        bool seen[10] = {false};
        for (int i = r; i < r + 3; i++) {
            for (int j = c; j < c + 3; j++) {
                int v = g[i][j];
                if (v < 1 || v > 9 || seen[v]) return false;
                seen[v] = true;
            }
        }
       
        int sum = 15;
      
        for (int i = r; i < r + 3; i++) {
            if (g[i][c] + g[i][c+1] + g[i][c+2] != sum) return false;
        }
       
        for (int j = c; j < c + 3; j++) {
            if (g[r][j] + g[r+1][j] + g[r+2][j] != sum) return false;
        }
       
        if (g[r][c] + g[r+1][c+1] + g[r+2][c+2] != sum) return false;
        if (g[r][c+2] + g[r+1][c+1] + g[r+2][c] != sum) return false;
        
        return true;
    }
};
