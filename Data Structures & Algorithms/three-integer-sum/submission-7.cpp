class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>ans;

        unordered_map<int,int>ump;
        for(int &x:nums)++ump[x];

        for(int i=0;i<nums.size();++i){
            --ump[nums[i]];
            for(int j=i+1;j<nums.size();++j){
                --ump[nums[j]];
                int req = - (nums[i]+nums[j]);
                if(ump[req]>0){
                    vector<int> temp = {nums[i],nums[j],req};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }
                ++ump[nums[j]];
            }
            ++ump[nums[i]];
        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};
