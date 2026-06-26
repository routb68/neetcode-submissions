class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(vector<int>&nums, vector<int>&temp, vector<bool>&vis){
        if(temp.size()== nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(vis[i]==false){
                temp.push_back(nums[i]);
                vis[i]= true;
                backtrack(nums,temp,vis);
                temp.pop_back();
                vis[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        ans.clear();
        vector<int>temp;
        vector<bool>vis(nums.size());
        backtrack(nums,temp,vis);
        return ans;
    }
};
