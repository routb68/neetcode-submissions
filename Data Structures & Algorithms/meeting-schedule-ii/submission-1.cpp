/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(), [](const Interval &a, const Interval &b){return a.start<b.start;});
        priority_queue<int,vector<int>,greater<int>>pq;
        for(const Interval &x:intervals){
            if(pq.size() and pq.top()<=x.start)pq.pop();
            pq.push(x.end);
        }
        return pq.size();
    }
};
