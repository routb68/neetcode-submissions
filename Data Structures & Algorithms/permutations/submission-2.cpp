class Solution {
public:
    vector<vector<int>>ans;
    void generate_permute(vector<int>&nums, vector<int>&temp_ans, vector<bool>&vis){
        if(nums.size()==temp_ans.size()){
            ans.emplace_back(temp_ans);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(vis[i]==false){
                temp_ans.emplace_back(nums[i]);
                vis[i]=true;
                generate_permute(nums,temp_ans,vis);
                temp_ans.pop_back();
                vis[i]= false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        ans.clear();
        vector<bool>vis(nums.size(),false);
        vector<int>temp_ans;
        generate_permute(nums,temp_ans,vis);
        return ans;
    }
};
