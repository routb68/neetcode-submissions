class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        for(int i=0;i<nums.size();++i){
            int low = i+1,high = nums.size()-1;
            while(low<=high){
                int mid = low + (high-low)/2;
                if (nums[mid]+nums[i]==tar) return {i+1,mid+1};
                else if (nums[mid] + nums[i] > tar) high = mid-1;
                else if (nums[mid] + nums[i]< tar) low = mid+1;
                // cout<< i<<mid<< low<<high<<endl;
            }
        }
        return {};
    }
};
