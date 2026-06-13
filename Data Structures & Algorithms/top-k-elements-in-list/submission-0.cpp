class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        for(int &x:nums) ++ump[x];
        vector<pair<int,int>>frq_int;
        for(auto &[x,y]:ump){
            frq_int.emplace_back(y,x);
        }
        sort(frq_int.begin(),frq_int.end(),greater<pair<int,int>>());
        vector<int>ans;
        for(int i=0;i<k;++i){
            ans.push_back(frq_int[i].second);
        }
        return ans;
    }
};
