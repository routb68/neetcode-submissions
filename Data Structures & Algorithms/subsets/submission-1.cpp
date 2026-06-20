class Solution {
public:
    vector<vector<int>>ans;
    void generate_subset(vector<int>&nums, vector<int>&temp,int idx){
        if(idx == nums.size()){
            ans.push_back(temp);
            return;
        }
        generate_subset(nums,temp,idx+1);
        temp.push_back(nums[idx]);
        generate_subset(nums,temp,idx+1);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        generate_subset(nums,temp,0);
        return ans;
    }
};
