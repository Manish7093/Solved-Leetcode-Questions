int countSubsets(vector<int>& nums, int n, int M)
{
int t[n + 1][M + 1];
for(int i = 0; i <= n; i++)
{
for(int j = 0; j <= M; j++)
{
if(i == 0)
t[i][j] = 0;
if(j == 0)
t[i][j] = 1;
}
}
//t[0][0] = 1;
for(int i = 1; i <= n; i++)
{
for(int j = 0; j <= M; j++)//Because range of the sum includes 0.
//Ex - If all the elements are 0 and we want a sum 0, for                                                             that we need j from 0. So that 0
//can also be considered as sum of previous su elements.
{
if(nums[i - 1] <= j)
t[i][j] = t[i - 1][j - nums[i - 1]] + t[i - 1][j];
else
t[i][j] = t[i - 1][j];
}
}
return t[n][M];
}
int findTargetSumWays(vector<int>& nums, int target)
{
target = abs(target);
int n = nums.size();
int sum = 0;
for(int i = 0; i < n; i++)
sum += nums[i];