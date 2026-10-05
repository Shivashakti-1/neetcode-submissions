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
        if(intervals.empty())
        {
            return 0;
        }
        int res=1;

        sort(intervals.begin(), intervals.end(), [](Interval& a, Interval& b){return a.end<b.end;});

        int prev = intervals[0].end;

        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i].start<prev)
            {
                res++;
            }

            else{
                prev=intervals[i].end;
            }
        }

        return res;
        
    }
};
