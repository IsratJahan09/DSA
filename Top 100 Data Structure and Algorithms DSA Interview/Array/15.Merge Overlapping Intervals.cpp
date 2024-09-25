/*Given a set of time intervals in any order, our task is to merge all overlapping intervals into one and output the 
result which should have only mutually exclusive intervals.
Example:
Input: arr = {{1,3},{2,4},{6,8},{9,10}}
Output: {{1, 4}, {6, 8}, {9, 10}}
Explanation: Given intervals: [1,3],[2,4],[6,8],[9,10], we have only two overlapping intervals here,[1,3] and [2,4]. 
Therefore we will merge these two and return [1,4],[6,8], [9,10].*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int res = 0;
        for(int i = 1; i<intervals.size(); i++){
            if(intervals[res][1] >= intervals[i][0]){
                intervals[res][1] = max(intervals[res][1], intervals[i][1]);
            }
            else{
                res++;
                intervals[res] = intervals[i];
            }
        }
                intervals.resize(res + 1);
        return intervals;
    }
};
