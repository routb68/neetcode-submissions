class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prep,sufp;
        int temp=1;
        for(int i=0;i<nums.size();++i){
            prep.emplace_back(temp);
            temp *= nums[i];
        }
        temp=1;
        for(int i=nums.size()-1;i>=0;--i){
            sufp.emplace_back(temp);
            temp *= nums[i];
        }
        reverse(sufp.begin(),sufp.end());
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();++i){
            ans[i] = prep[i]*sufp[i];
        }
        return ans;
    }
};
