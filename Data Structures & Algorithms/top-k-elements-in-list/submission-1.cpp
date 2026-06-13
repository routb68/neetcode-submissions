class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        for(int &x:nums) ++ump[x];
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto &[num,frq]:ump){
            pq.push({frq,num});
            if(pq.size()>k)pq.pop();
        }
        vector<int>ans;
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
            
        }
        return ans;
    }
};
