class Solution {
public:
    void dfs(vector<vector<int>>&adj, vector<bool>&vis, int node){
        vis[node]=true;
        for(int &x:adj[node]){
            if(vis[x]==false) dfs(adj,vis,x);
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto &x:edges){
            adj[x[1]].push_back(x[0]);
            adj[x[0]].push_back(x[1]);
        }
        int ans=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;++i){
            if(vis[i]==false){
                dfs(adj,vis,i);
                ++ans;
            }
        }
        return ans;
    }
};
