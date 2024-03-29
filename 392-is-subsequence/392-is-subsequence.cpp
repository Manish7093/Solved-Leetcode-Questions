/*class Solution {
public:
    int lcs(string s,string t){
           int m=s.length(),n=t.length();
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0||j==0)
                    dp[i][j]=0;
            }
        }
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==t[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
    bool isSubsequence(string s, string t) {
        
        int k=s.length();
        int j=lcs(s,t);
        if(k==j)
            return true;
        return false;
    }
};*/
/*class Solution {
public:
    bool isSubsequence(string s, string t) {
          int m=s.length(),n=t.length();
        bool dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            dp[i][0]=false;
        }
        for(int j=0;j<n+1;j++)
            dp[0][j]=true;
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==t[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=dp[i][j-1];
            }
        }
        return dp[m][n];
      
    }
};*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.length();
        int m=s.length();
        if(m==0 && n==0)
            return true;
        for(int i=0,j=0;j<m,i<n;i++){
            if(s[j]==t[i])
                j++;
            if(j==m)
                return true;
        }
        
        
        return false;
    }
};