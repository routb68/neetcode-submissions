class Solution {
public:
    bool canFinish(int nc, vector<vector<int>>& pr) {
        vector<vector<int>>adj(nc);
        vector<int>ind(nc);
        for(vector<int>&x:pr){
            adj[x[1]].emplace_back(x[0]);
            ++ind[x[0]];
        }
        queue<int>q;
        int vis=0;
        for(int i=0;i<nc;++i){
            if(ind[i]==0){
                q.push(i);
            }
        }
        while(q.size()){
            int node = q.front(); q.pop();
            ++vis;
            for(int &nodes:adj[node]){
                --ind[nodes];
                if(ind[nodes]==0){
                    q.push(nodes);
                }
            }
        }
        return vis==nc;
    }
};
