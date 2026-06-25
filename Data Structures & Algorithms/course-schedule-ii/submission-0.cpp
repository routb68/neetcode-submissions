class Solution {
public:
    vector<int> findOrder(int nc, vector<vector<int>>& pr) {
        vector<vector<int>>adj(nc);
        vector<int>ind(nc);
        for(auto &x:pr){
            ++ind[x[0]];
            adj[x[1]].emplace_back(x[0]);
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<nc;++i){
            if(ind[i]==0)q.push(i);
        }
        while(q.size()){
            int fnode= q.front();q.pop();
            ans.emplace_back(fnode);
            for(int &node:adj[fnode]){
                --ind[node];
                if(ind[node]==0)q.push(node);
            }
        }
        if(ans.size()==nc) return ans;
        return {};
    }
};
