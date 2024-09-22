class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size(); // size of the array

        // Sort the given intervals:
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;

        for (int i = 0; i < n; i++) {
            // If the merged list is empty or there is no overlap
            if (merged.empty() || intervals[i][0] > merged.back()[1]) {
                merged.push_back(intervals[i]);
            } else {
                // There is overlap, merge the intervals
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }
        }
        return merged;
    }
};
