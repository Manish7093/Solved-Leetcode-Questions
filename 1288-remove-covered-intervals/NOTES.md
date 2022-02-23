class Solution {
public:
int removeCoveredIntervals(vector<vector<int>>& intervals) {
int count=0;
for(int i=0 ; i<intervals.size() ; i++)
{
if(intervals[i][0]!=-1)
{
for(int j=0 ; j<intervals.size() ; j++)
{
if(i!=j and intervals[j][0]!=-1 and intervals[i][0]<=intervals[j][0] and intervals[i][1]>=intervals[j][1])
{
count++;
intervals[j][0]=-1;
}
}
}
}
return intervals.size()-count;
}
};