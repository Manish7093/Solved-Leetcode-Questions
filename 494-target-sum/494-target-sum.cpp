class Solution {
public:
    int countzero(vector<int>&nums){
        int count{0};
        int n=nums.size();
        for(int j=0;j<n;j++)
            if(nums[j]==0)
                count++;
        return count;
    }
    int countSubsetSum(vector<int>nums,int n,int sum){
    
        int dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    dp[i][j]=0;
                if(j==0)
                    dp[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(nums[i-1]>j ||nums[i-1]==0)
                    dp[i][j]=(dp[i-1][j]);
                else
                    dp[i][j]=(dp[i-1][j-nums[i-1]]+dp[i-1][j]);
            }
        }
        
        return (dp[n][sum])*pow(2,countzero(nums));
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int tar=abs(target); 
        int n=nums.size();
        int range{0};
        for(int i=0;i<n;i++)
            range+=nums[i];
        int sum=(tar+range)/2;
        if((tar+range)%2==1)
            return 0;
        return countSubsetSum(nums,n,sum);
    }
};