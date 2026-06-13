class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre_mul,suf_mul;
        pre_mul.push_back(1);
        int temp_num = 1;
        for(int i =1;i<nums.size();++i){
            temp_num *= nums[i-1];
            pre_mul.push_back(temp_num);
        }
        temp_num = 1;
        suf_mul.push_back(temp_num);
        for(int i=nums.size()-2;i>=0;--i){
            temp_num *= nums[i+1];
            suf_mul.push_back(temp_num);
        }
        reverse(suf_mul.begin(),suf_mul.end());
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();++i){
            ans[i] = pre_mul[i]*suf_mul[i];
        }
        return ans;
    }
};
