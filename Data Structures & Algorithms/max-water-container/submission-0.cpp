class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans =0;
        for(int i=0;i<nums.size();++i){
            for(int j =i+1;j<nums.size();++j){
                ans = max(ans, min(nums[i],nums[j])* (j-i));
            }
        }
        return ans;
    }
};
