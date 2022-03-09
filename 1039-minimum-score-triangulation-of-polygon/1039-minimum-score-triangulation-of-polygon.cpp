/*class Solution {
public:
    //TLE 74/94 passed
    int solve(vector<int>&values,int i,int j){
        if(i>=j)
            return 0;
        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++){
            int temp_ans=solve(values,i,k)+solve(values,k+1,j)+values[i-1]*values[k]*values[j];
            ans=min(ans,temp_ans);
        }
        return ans;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        return solve(values,1,n-1);
    }
};*/
class Solution {
public:
    int dp[1002][1002];
    int solve(vector<int>&values,int i,int j){
        if(i>=j){
            dp[i][j]=0;
            return 0;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++){
            int temp_ans=solve(values,i,k)+solve(values,k+1,j)+values[i-1]*values[k]*values[j];
            ans=min(ans,temp_ans);
        }
        return dp[i][j]=ans;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
      //  vector<vector<int>>dp(n+1,vector<int>(n+1));
        memset(&dp,-1,sizeof(dp));
        return solve(values,1,n-1);
    }
};