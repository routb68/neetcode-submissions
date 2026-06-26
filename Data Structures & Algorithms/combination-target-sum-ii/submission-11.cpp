class Solution {
public:
    set<vector<int>> ans;
    void backtrack(vector<int>&nums, vector<int>&temp, int idx, int tar){
        if(tar==0){
            ans.insert(temp);
            return;
        }
        if(tar<0 or idx== nums.size()) return;
        temp.emplace_back(nums[idx]);
        backtrack(nums,temp,idx+1, tar-nums[idx]);
        temp.pop_back();
        while(idx+1<nums.size() and nums[idx]==nums[idx+1]) ++idx;
        backtrack(nums,temp, idx+1, tar);
    }
    vector<vector<int>> combinationSum2(vector<int>& cs, int tar) {
        ans.clear();
        sort(cs.begin(),cs.end());
        vector<int>temp;
        backtrack(cs,temp,0,tar);
        return vector<vector<int>>(ans.begin(),ans.end()) ;
    }
};
