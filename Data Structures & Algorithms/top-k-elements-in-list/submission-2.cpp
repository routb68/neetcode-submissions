class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        for(int &x:nums) ++ump[x];
        vector<vector<int>>frq_int(nums.size()+1);
        for(auto &[num,frq]:ump){
            frq_int[frq].push_back(num);
        }
        vector<int>ans;
        for(int i=frq_int.size()-1;i>=0;--i){
            for(int x:frq_int[i]){
                ans.push_back(x);
            }
            if(ans.size()==k) break;
        }
        return ans;
    }
};
