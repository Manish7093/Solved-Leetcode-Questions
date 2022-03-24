class Solution {
public:
    int dp[107][10007];
    int solve(int egg,int floor){
        if(dp[egg][floor]!=-1)
            return dp[egg][floor];
        
        if(egg==1||floor==1||floor==0){
            dp[egg][floor]=floor;
            return floor;
        }
        int start=1,end=floor;
        int ans=INT_MAX;
        while(start<=end){
            int mid=start+(end-start)/2;
            int low=solve(egg-1,mid-1);
            int high=solve(egg,floor-mid);
            
            int temp=1+max(low,high);
            if(low<high)
                start=mid+1;
            else
                end=mid-1;
            ans=min(ans,temp);
        }
        dp[egg][floor]=ans;
        return ans;
    }
    int superEggDrop(int k, int n) {
        memset(&dp,-1,sizeof(dp));
        return solve(k,n);
    }
};