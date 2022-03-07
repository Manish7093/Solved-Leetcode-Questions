class Solution {
public:
int minimumDeleteSum(string& sa, string& sb) {
int sza = sa.length(), szb = sb.length();
vector<vector<int>>dp(sza + 1, vector<int>(szb + 1, INT_MAX));
dp[0][0] = 0;
for (int i = 1;i <= szb;++i)
dp[0][i] = dp[0][i - 1] + sb[i - 1] - 'a' + 97;
for (int i = 1;i <= sza;++i)
dp[i][0] = dp[i - 1][0] + sa[i - 1] - 'a' + 97;
for (int i = 1;i <= sza;++i) {
for (int j = 1;j <= szb;++j) {
if (sa[i - 1] == sb[j - 1])
dp[i][j] = dp[i - 1][j - 1];
dp[i][j] = min(min(sa[i - 1] - 'a' + 97 + dp[i - 1][j], sb[j - 1] - 'a' + 97 + dp[i][j - 1]), dp[i][j]);
}
}
return dp.back().back();
}
};
​
​
​
class Solution {
public:
int minimumDeleteSum(string s1, string s2) {
int m = s1.size(), n = s2.size();
vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
for (int j = 1; j <= n; j++)
dp[0][j] = dp[0][j-1]+s2[j-1];
for (int i = 1; i <= m; i++) {
dp[i][0] = dp[i-1][0]+s1[i-1];
for (int j = 1; j <= n; j++) {
if (s1[i-1] == s2[j-1])
dp[i][j] = dp[i-1][j-1];
else
dp[i][j] = min(dp[i-1][j]+s1[i-1], dp[i][j-1]+s2[j-1]);
}
}
return dp[m][n];
}
};