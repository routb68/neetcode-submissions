class Solution {
   public:
    int dir[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    bool dfs(vector<vector<char>>& bd, string& s, vector<vector<bool>>& vis, int r, int c, int idx) {
        if (idx == s.size()) {
            return true;
        }
        if (r > bd.size() - 1 or r < 0 or c > bd[0].size() - 1 or c < 0) return false;
        if (bd[r][c] != s[idx]) return false;
        if(vis[r][c]) return false;
        vis[r][c] = true;
        for(int i=0;i<4;++i){
            int nr = r+dir[i][0], nc=c+dir[i][1];
            if(dfs(bd,s,vis,nr,nc,idx+1)) return true;
        }
        vis[r][c]=false;
        return false;
    }
    bool exist(vector<vector<char>>& bd, string s) {
        int m = bd.size(), n = bd[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (dfs(bd, s, vis, i, j, 0)) return true;
            }
        }
        return false;
    }
};
