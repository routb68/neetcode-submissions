class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>ans(temp.size());
        for(int i=temp.size()-2;i>=0;--i){
            int j = i+1;
            while(j<temp.size() and temp[i]>=temp[j]){
                if(ans[j]==0){
                    j=INT_MAX;break;
                }else{
                    j+=ans[j];
                }
            }
            if(j<temp.size()){
                ans[i] = j-i;
            }
        }
        return ans;
    }
};
