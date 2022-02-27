class Solution {
public:
    int numSquares(int n) {
        vector<int>sqr;
        for(int i=1;i<=sqrt(n);i++)
            sqr.push_back(i*i);
        int k=sqr.size();
        int dp[k+1][n+1];
        
        for(int i=0;i<k+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0)
                    dp[i][j]=INT_MAX-1;
                if(j==0)
                    dp[i][j]=0;
            }
        }
        
        for(int j=1;j<n+1;j++){
            if(j%sqr[0]==0)
                dp[1][j]=(j/sqr[0]);
            else
                dp[1][j]=INT_MAX-1;
        }
        
        for(int i=2;i<k+1;i++){
            for(int j=1;j<n+1;j++){
                if(sqr[i-1]<=j)
                    dp[i][j]=min(1+dp[i][j-sqr[i-1]],dp[i-1][j]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        
        return dp[k][n];
      
     
       
    /*   
    // similiar to coin change problem
       // now you have to find the coins too, this is the only diff
    vector<int>coins;
       int i=1;
       while(i*i<=n){
           coins.push_back(i*i);    // build coins array
           i++;
       }
        
        int k=coins.size();
        int dp[k+1][n+1];
        
        for(int i=0;i<=k;i++) dp[i][0]=0;
        for(int i=1;i<=n;i++) dp[0][i]=INT_MAX-1;
        
        for(int i=1;i<=n;i++){
            if(i%coins[0]==0) dp[1][i]=(i/coins[0]);
            else dp[1][i]=INT_MAX-1;
        }
        
        for(int i=2;i<=k;i++){
             for(int j=1;j<=n;j++){
                 if(coins[i-1]<=j) dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                 else dp[i][j]=dp[i-1][j];
             }
        }
       return dp[k][n];
  

        */
    }
};