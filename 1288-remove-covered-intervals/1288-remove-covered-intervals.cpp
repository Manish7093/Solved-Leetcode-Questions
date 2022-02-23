class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
    //TC-O(n) SC-O(1)
        /*  int n=intervals.size();
        int count=1;
        sort(intervals.begin(),intervals.end());
        int x1=intervals[0][0],x2=intervals[0][1];
        for(int i=1;i<n;i++){
                if(intervals[i][0]>x1 && intervals[i][1]>x2 )
                    count++;
                 if(intervals[i][1]>x2){
                     x1=intervals[i][0];
                     x2=intervals[i][1];
                 }   
        }
        return count;*/
        //TC-O(N^2) sc-O(N)
        int n=intervals.size();
        int count{0};
        for(int i=0;i<n;i++){
            if(intervals[i][0]!=-1){
                for(int j=0;j<n;j++){
                    if(j!=i &&intervals[j][0]!=-1 && intervals[i][0]<=intervals[j][0] && intervals[i][1]>=intervals[j][1])
                    {
                        count++;
                        intervals[j][0]=-1;
                    }
                }
            }
        }
        return n-count; 
        
        
    }
};