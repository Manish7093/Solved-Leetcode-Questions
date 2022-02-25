class Solution {
public:
    int integerBreak(int n) {
     /*   vector<int>d(n+1,0);
        d[0]=1;
        for(int i=1;i<n;i++){
            for(int j=i;j<=n;j++)
                d[j]=max(d[j],d[j-i]*i);
        }
        return d[n];*/
        
        int dp[n][n+1];
        int len[n-1];
        for(int i=0;i<n-1;i++)
            len[i]=i+1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n+1;j++){
                if(i==0)
                    dp[i][j]=0;
                if(j==0)
                    dp[i][j]=1;
            }
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<n+1;j++){
                if(len[i-1]<=j)
                    dp[i][j]=max(i*dp[i][j-len[i-1]],dp[i-1][j]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n-1][n];
        
        
    }
};