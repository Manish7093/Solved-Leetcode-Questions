class Solution {
    public int combinationSum4(int[] nums, int target) {
    int[][] dp = new int[target + 1][nums.length + 1];
	if (nums.length == 0) return 0;
	for (int i = 0; i <= nums.length; i++)
		dp[0][i] = 1;
	for (int i = 1; i <= target; i++) {
		for (int j = 1; j <= nums.length; j++) { // using each coin
			dp[i][j] = dp[i][j - 1];
			if (i >= nums[j - 1])
				dp[i][j] = dp[i][j] + dp[i - nums[j - 1]][nums.length];
		}
	}
	return dp[target][nums.length];
    }
}