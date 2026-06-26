class Solution {
public:
    set<vector<int>>ans;
    void go(vector<int>&nums, vector<int>&temp, int idx){
        if(idx==nums.size()){
            ans.insert(temp);
            return;
        }
        temp.push_back(nums[idx]);
        go(nums,temp,idx+1);
        temp.pop_back();
        go(nums, temp,idx+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        ans.clear();
        vector<int>temp;
        go(nums,temp,0);
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};
