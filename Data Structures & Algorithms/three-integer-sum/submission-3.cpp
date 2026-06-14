class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>ump;
        for(int &x:nums)++ump[x];
        for(int i=0;i<nums.size();++i){
            --ump[nums[i]];
            if(i>0 and nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();++j){
                --ump[nums[j]];
                if(j>i+1 and nums[j]==nums[j-1])continue;
                if(ump[-(nums[i]+nums[j])]>0){
                    ans.push_back({nums[i],nums[j], -(nums[i]+nums[j])});
                }
            }
            for(int j=i+1;j<nums.size();++j) ++ump[nums[j]];
        }
        return ans;
    }
};
