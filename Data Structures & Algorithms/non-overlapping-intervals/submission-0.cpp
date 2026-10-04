class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> res;

        if (intervals.empty())
            return 0;

        sort(intervals.begin(), intervals.end());

        res.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {

            // Overlap
            if (intervals[i][0] <= res.back()[1]) {

                res.back()[1] =
                    max(res.back()[1], intervals[i][1]);
            }

            // No overlap
            else {

                res.push_back(intervals[i]);
            }
        }
        int p = intervals.size()-res.size()-1;

        return p;
        
    }
};
