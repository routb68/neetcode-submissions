class Solution {
public:
    int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
    vector<vector<int>>dp;
    int go(vector<vector<int>>&mat, int i, int j,int preval){
        if(i<0 or j<0 or i>=mat.size() or j >=mat[0].size()) return 0;
        if(mat[i][j]<=preval) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans = 1;
        for(int k=0;k<4;++k){
            ans = max(ans, 1+go(mat, i+dir[k][0],j+dir[k][1], mat[i][j]));
        }
        dp[i][j]=ans;
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ans =0;
        dp =  vector<vector<int>>(matrix.size(),vector<int>(matrix[0].size(),-1));
        for(int i=0;i<matrix.size();++i){
            for(int j=0;j<matrix[0].size();++j){
                ans = max( ans, go(matrix,i,j,INT_MIN));
            }
        }
        return ans;
    }
};
