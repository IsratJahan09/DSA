/*Given a set of non-overlapping intervals and a new interval, insert the interval at the correct position.
If the insertion results in overlapping intervals, then merge the overlapping intervals. Assume that the set of non-overlapping 
intervals is sorted based on start time, to find the correct position of insertion.
Prerequisite: Merge the intervals
Examples: 
Input: Set : [1, 3], [6, 9]   New Interval : [2, 5] 
Output: [1, 5], [6, 9]
Explanation: The correct position to insert a new interval [2, 5] is between the two given intervals. 
The resulting set would have been [1, 3], [2, 5], [6, 9], but the intervals  [1, 3], [2, 5] are overlapping. So,
they are merged in one interval [1, 5].  */



class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>result;
        for(auto it: intervals){
            if(it[1]<newInterval[0]){               //another way while loop->gfg
                result.push_back(it);
            }
            else if(it[0]>newInterval[1]){
                result.push_back(newInterval);
                newInterval = it;
            }
            else{
                newInterval[0] = min(it[0], newInterval[0]);
                newInterval[1]  = max(it[1], newInterval[1]);
            }
        }
        result.push_back(newInterval);
        return result;
    }
};
