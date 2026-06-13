class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        for(int i =0;i<nums.size();++i){
            if(ump.find(target-nums[i])==ump.end())ump[nums[i]]=i;
            else return {ump[target-nums[i]],i};
        }
        return {0,0};
    }
};
