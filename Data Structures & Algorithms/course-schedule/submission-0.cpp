class Solution {
   public:
    bool dfs(vector<vector<int>>& adj, vector<bool>& vis, vector<bool>& recu, int node) {
        vis[node] = true;
        recu[node] = true;
        for (int& x : adj[node]) {
            if (recu[x]) return true;
            if (vis[x]) continue;
            if (dfs(adj, vis, recu, x)) return true;
        }
        recu[node] = false;
        return false;
    }
    bool canFinish(int nc, vector<vector<int>>& pr) {
        vector<vector<int>> adj(nc);
        for (vector<int>& x : pr) adj[x[1]].push_back(x[0]);
        vector<bool> vis(nc, false);
        vector<bool> recu(nc, false);
        for (int i = 0; i < nc; ++i) {
            if (vis[i] == false) {
                if (dfs(adj, vis, recu, i)) return false;
            }
        }
        return true;
    }
};
