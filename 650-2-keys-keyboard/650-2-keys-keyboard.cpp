class Solution {
public:
  
   
    int minSteps(int n) {
      int dp[n+1];
        dp[0]=0,dp[1]=0;
        for(int i=2;i<n+1;i++){
            dp[i]=i;
            for(int j=i/2;j>1;j--){
                if(i%j==0){
                    dp[i]=dp[j]+(i/j);
                    break;
                }
            }
        }
        return dp[n];
    }
};