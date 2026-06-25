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
    void bfs(vector<vector<char>>&grid, int r, int c){
        queue<pair<int,int>>q;
        q.push({r,c});
        grid[r][c]='0';
        while(q.size()){
            auto idx = q.front();q.pop();
            int row = idx.first, col = idx.second;
            for(int i=0;i<4;++i){
                int nr = row+directions[i][0];
                int nc = col+directions[i][1];
                if(nc<0 or nr<0 or nr>=grid.size() or nc>=grid[0].size()) continue;
                if(grid[nr][nc]=='1'){grid[nr][nc]='0'; q.push({nr,nc});}
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int island = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]=='1') {
                    bfs(grid, i, j);
                    ++island;
                }
            }
        }
        return island;
    }
};
