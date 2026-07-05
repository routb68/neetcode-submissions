class Solution {
public:
    int check_pos(vector<int>&piles, int spd, int h){
        int temp_h=0;
        for(int &x:piles){
            temp_h += (x/spd);
            if(x%spd)++temp_h;
        }
        return temp_h<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1, high = INT_MAX;
        while(low<high){
            int mid = low +(high-low)/2;
            if(check_pos(piles,mid,h))high=mid;
            else low = mid+1;
        }
        return low;
    }
};
