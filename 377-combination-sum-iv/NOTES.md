public static int combinationSum412s(int[] coins, int amount) {
int[][] dp = new int[amount + 1][coins.length + 1];
if (coins.length == 0) return 0;
for (int i = 0; i <= coins.length; i++)
dp[0][i] = 1;
for (int i = 1; i <= amount; i++) {
for (int j = 1; j <= coins.length; j++) { // using each coin
dp[i][j] = dp[i][j - 1];
if (i >= coins[j - 1])
dp[i][j] = dp[i][j] + dp[i - coins[j - 1]][coins.length];
}
}
return dp[amount][coins.length];
}