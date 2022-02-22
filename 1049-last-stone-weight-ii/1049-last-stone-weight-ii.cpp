class Solution {
public:
    vector<int> subset(vector<int> nums,int sum){
        int n=nums.size();
        vector<vector<bool>>dp(n+1,vector<bool>(sum+1));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    dp[i][j]=false;
                if(j==0)
                    dp[i][j]=true;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(nums[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=(dp[i-1][j-nums[i-1]])||(dp[i-1][j]);
            }
        }
        vector<int>res;
        for(int i=0;i<sum+1;i++){
            if(dp[n][i]==true)
                res.push_back(i);
        }
        return res;
    }
    int lastStoneWeightII(vector<int>& stones) {
        int range{0},n=stones.size();
        for(int i=0;i<n;i++ )
            range+=stones[i];
        vector<int>v=subset(stones,range/2);
        int min1=INT_MAX;
        for(int i=0;i<v.size();i++)
             min1=min(min1,abs(range-2*v[i]));
    return min1;
  
    }
};