class Solution(object):
    def minMeetingRooms(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: int
        """
        if not intervals:
            return 0
        
        start_pointer = end_pointer = 0
        rooms_needed = 0

        start_timing = sorted(start[0] for start in intervals)
        end_timing = sorted(end[1] for end in intervals)

        for start_pointer in range(len(intervals)):
            if start_timing[start_pointer] >= end_timing[end_pointer]:
                rooms_needed -=1
                end_pointer +=1
            rooms_needed += 1
        
        return rooms_needed


