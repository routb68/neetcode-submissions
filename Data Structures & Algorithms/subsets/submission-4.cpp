class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i=0;i<(1<<nums.size());++i){
            temp.clear();
            for(int j=0;j<nums.size();++j){
                if(i & (1<<j)) temp.emplace_back(nums[j]);
            }
            ans.emplace_back(temp);
        }
        return ans;
    }
};
