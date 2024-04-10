/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
        return a.start < b.start;
    });
    
    vector<Interval> merged;
    merged.push_back(intervals[0]);
    
    for(int i = 1; i < intervals.size(); i++) {
        if(merged.back().end >= intervals[i].start) {
            merged.back().end = max(merged.back().end, intervals[i].end);
        }
        else {
            merged.push_back(intervals[i]);
        }
    }
    return merged;
}
