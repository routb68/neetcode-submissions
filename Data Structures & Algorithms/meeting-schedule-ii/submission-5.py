"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""
class Solution:
    def minMeetingRooms(self, intervals: List[Interval]) -> int:
        rooms = []
        intervals.sort(key = lambda x: x.start)
        for i in range(len(intervals)):
            if len(rooms) >0 and intervals[i].start >= rooms[0]:
                heapq.heappop(rooms)
            heapq.heappush(rooms, intervals[i].end)

        return len(rooms)