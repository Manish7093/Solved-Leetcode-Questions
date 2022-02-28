class Solution {
public:
  
   
    int minSteps(int n) {
      int dp[n+1];
        dp[0]=0,dp[1]=0;
        for(int i=2;i<n+1;i++){
            dp[i]=i;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    dp[i]=dp[j]+(i/j);
                    
                }
            }
        }
        return dp[n];
    }
};