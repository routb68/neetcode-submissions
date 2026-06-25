class Solution {
public:
    void dfs(vector<vector<int>>&ht,int r, int c, vector<vector<bool>>&oc){
        oc[r][c]=true;
        int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
        for(int i=0;i<4;++i){
            int nr = r+dir[i][0],nc=c+dir[i][1];
            if(nr<0 or nc<0 or nr>ht.size()-1 or nc >ht[0].size()-1)continue;
            if(oc[nr][nc]) continue;
            if(ht[nr][nc]>=ht[r][c]){
                dfs(ht,nr,nc,oc);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& ht) {
        int m = ht.size(), n = ht[0].size();
        vector<vector<bool>>atl(m,vector<bool>(n,false));
        vector<vector<bool>>pac(m,vector<bool>(n,false));
        for(int i=0;i<m;++i){
            dfs(ht,i,0,pac);
            dfs(ht,i,n-1,atl);
        }
        for(int i=0;i<n;++i){
            dfs(ht,0,i,pac);
            dfs(ht,m-1,i,atl);
        }
        vector<vector<int>>ans;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(atl[i][j] and pac[i][j]) ans.push_back({i,j});
            }
        }
        return ans;
    }
};
