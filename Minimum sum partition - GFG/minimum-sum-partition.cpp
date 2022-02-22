// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
    vector<int>subset(int nums[],int n,int sum){
        bool dp[n+1][sum+1];
        vector<int>res;
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
                    dp[i][j]=(dp[i-1][j-nums[i-1]]) || (dp[i-1][j]);
            }
            
        }
        
        for(int i=0;i<sum+1;i++){
            if(dp[n][i]==true)
                res.push_back(i);
        }
        return res;
    }
  
	int minDifference(int arr[], int n)  { 
	    int range{0};
	    
	    for(int i=0;i<n;i++)
	        range+=arr[i];
	   int min1=INT_MAX;
	   vector<int>v=subset(arr,n,range);
	   for(int i=0;i<v.size();i++){
	       min1=min(min1,abs(range-2*v[i]));
	   }
	 return min1;   
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends