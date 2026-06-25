class Solution {
public:
    int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int dfs(vector<vector<int>>&grid, int r, int c){
        if(r<0 or c<0 or r>=grid.size() or c>=grid[0].size()) return 0;
        if(grid[r][c]==0) return 0;
        int ans =1;
        grid[r][c]=0;
        for(int i=0;i<4;++i){
            ans += dfs(grid,r+dir[i][0],c+dir[i][1]);
        }
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size(),c=grid[0].size();
        int ans=0;
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                if(grid[i][j]){
                    ans = max(ans, dfs(grid,i,j));
                }
            }
        }
        return ans;
    }
};
