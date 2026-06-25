class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(grid[i][j]==2) q.push({{i,j},0});
            }
        }
        int max_time =0;
        int dir[4][2] = {{1,0},{0,1},{0,-1},{-1,0}};
        while(q.size()){
            auto node = q.front();q.pop();
            int temp_time = node.second;
            int r=node.first.first, c = node.first.second;
            for(int i=0;i<4;++i){
                int nr = r+dir[i][0], nc= c+dir[i][1];
                if(nc<0 or nr<0 or nc>=n or nr>=m) continue;
                if(grid[nr][nc]!=1) continue;
                grid[nr][nc]=2;
                q.push({{nr,nc},temp_time+1});
                max_time =max(max_time, temp_time+1);
            }
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(grid[i][j]==1) return -1;
            }
        }
        return max_time;
    }
};
