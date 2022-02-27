class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        int m=days[n-1];
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0)
                    dp[i][j]=0;
                else if(days[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else{
                    int res=costs[0]+dp[i-1][j];
                    if(days[i-1]-7>=0){
                        res=min(res,costs[1]+dp[i-1][days[i-1]-7]);
                    }
                    else
                        res=min(res,costs[1]);
                    if(days[i-1]-30>=0){
                        res=min(res,costs[2]+dp[i-1][days[i-1]-30]);
                    }else
                        res=min(res,costs[2]);
                    dp[i][j]=res;
                }
                    
                    
            }
        }
        return dp[n][m];
        
    }
};