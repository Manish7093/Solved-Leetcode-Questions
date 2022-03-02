class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.length(),m=t.length();
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0)
                    dp[i][j]=0;
                if(j==0)
                    dp[i][j]=1;
            }
        }
        int mod=1000000009;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s[i-1]==t[j-1])
                    dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return (dp[n][m]);
    }
};