class Solution {
   public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        queue<pair<int, int>> q;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) q.push({i, j});
            }
        }
        int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        while (q.size()) {
            auto node = q.front();
            q.pop();
            int r = node.first, c = node.second;
            for (int i = 0; i < 4; ++i) {
                int nr = r + dir[i][0], nc = c + dir[i][1];
                if (nc < 0 or nr < 0 or nr >= m or nc >= n) continue;
                if (grid[nr][nc] != INT_MAX) continue;
                grid[nr][nc] = 1 + grid[r][c];
                q.push({nr, nc});
            }
        }
    }
};
