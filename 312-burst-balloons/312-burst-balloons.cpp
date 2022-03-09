class Solution {
public:
    int dp[302][302];
    int solve(vector<int>&nums,int i,int j){
        if(i>=j){
            dp[i][j]=0;
            return 0;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=INT_MIN;
        for(int k=i;k<=j-1;k++){
            int temp_ans=solve(nums,i,k)+solve(nums,k+1,j)+nums[i-1]*nums[k]*nums[j];
            ans=max(ans,temp_ans);
        }
        return dp[i][j]=ans;
            
    }
    
    int maxCoins(vector<int>& nums) {
      
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        memset(&dp,-1,sizeof(dp));
         int n=nums.size();
        return solve(nums,1,n-1);
    }
};