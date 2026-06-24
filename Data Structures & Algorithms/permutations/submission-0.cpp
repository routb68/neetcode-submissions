class Solution {
public:
    vector<vector<int>>ans;
    void go(vector<int>&nums,vector<bool>&temp,vector<int>&res){
        if(res.size()==nums.size()){
            ans.emplace_back(res);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(temp[i]==false){
                res.push_back(nums[i]);
                temp[i]=true;
                go(nums,temp,res);
                res.pop_back();
                temp[i]=false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        ans.clear();
        vector<bool>temp(nums.size(),false);
        vector<int>res;
        go(nums,temp,res);
        return ans;
    }
};
