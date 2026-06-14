class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();++i){
            if(ump.find(tar-nums[i])!=ump.end()){
                return {ump[tar-nums[i]]+1, i+1};
            }
            ump[nums[i]]=i;
        }
        return {};
    }
};
