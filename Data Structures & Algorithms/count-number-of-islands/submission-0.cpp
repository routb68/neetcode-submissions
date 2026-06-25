class Solution {
   public:
    int directions[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    void dfs(vector<vector<char>>& grid, int ridx, int cidx) {
        if (ridx < 0 or cidx < 0 or ridx >= grid.size() or cidx >= grid[0].size() ) return;
        if(grid[ridx][cidx]=='0') return;
        grid[ridx][cidx]='0';
        for(int i=0;i<4;++i){
            dfs(grid,ridx+directions[i][0],cidx+directions[i][1]);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int island = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]=='1') {
                    dfs(grid, i, j);
                    ++island;
                }
            }
        }
        return island;
    }
};
