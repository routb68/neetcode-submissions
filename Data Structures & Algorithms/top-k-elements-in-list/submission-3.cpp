class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        for(int &x:nums)++ump[x];
        priority_queue<pair<int,int>>pq;
        for(auto &[num,frq]:ump){
            pq.push({frq,num});
        }
        vector<int>ans;
        for(int i=0;i<k;++i){
            auto x=pq.top();pq.pop();
            ans.emplace_back(x.second);
        }
        return ans;
    }
};
