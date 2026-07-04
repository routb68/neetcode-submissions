class Solution {
public:
    bool check(vector<int>&piles, int spd, int h){
        int tm =0;
        for(int &x:piles){
            tm += (x/spd);
            if(x%spd)++tm;
        }
        return tm<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = INT_MAX;
        while(high>low){
            int mid = low + (high-low)/2;
            if(check(piles,mid,h))high=mid;
            else low = mid+1;
        }
        return low;
    }
};
