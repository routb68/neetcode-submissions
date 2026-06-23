class Solution {
public:
    map<pair<int,int>,int>mp;
    int dfs(vector<int>&nums,int i, int lidx){
        if(i==nums.size()) return 0;
        if(mp.find({i,lidx})!=mp.end()) return mp[{i,lidx}];
        int ans = dfs(nums,i+1,lidx);
        if(lidx==-1 or nums[i]>nums[lidx]){
            ans = max(ans, 1+dfs(nums,i+1,i));
        }
        mp[{i,lidx}]=ans;
        return ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        return dfs(nums,0,-1);
    }
};
