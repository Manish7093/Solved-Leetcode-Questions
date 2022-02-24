// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int countzero(int arr[],int n,int i){
	    int count=0;
	    for(int j=0;j<=i;j++){
	        if(arr[j]==0)
	        count++;
	    }
	    return count;
	}
	int perfectSum(int arr[], int n, int sum)
	{   int mod=1e9+7;
         int dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    dp[i][j]=0;
                if(j==0)
                    dp[i][j]=pow(2,countzero(arr,n,i));
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j)
                    dp[i][j]=((dp[i-1][j-arr[i-1]])+(dp[i-1][j]))%mod;
                   
                else
                     dp[i][j]=(dp[i-1][j]);
            }
        }
        
        return dp[n][sum];
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends