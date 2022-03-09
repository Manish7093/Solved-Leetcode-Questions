int dp[502][502];
​
int solve_memo(vector<int>&arr,int i,int j)
{
// base condition
if(i>=j) return 0;
if(dp[i][j]!=-1) return dp[i][j];
int ans =INT_MIN;
for(int k=i;k<j;k++)
{
int tempAns = solve_memo(arr,i,k)+solve_memo(arr,k+1,j) + (arr[i-1]*arr[k]*arr[j]);
ans=max(ans,tempAns);
}
return dp[i][j]=ans;
}
​
int maxCoins(vector<int>& nums) {
nums.insert(nums.begin(), 1);
nums.insert(nums.end(), 1);
memset(dp,-1,sizeof(dp));
return solve_memo(nums,1,nums.size()-1);
}
}