// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



  
  
  
//   int t[1001][1001];
//   int profit(int W, int wt[], int val[], int n){
//       if(n==0|| W==0)
//             return 0;
//         if(t[n][W]!=-1)
//             return t[n][W];
//          if(W>=wt[n-1])
//             return t[n][W]=max(val[n-1]+profit(W-wt[n-1],wt,val,n-1),profit(W,wt,val,n-1));
//         if(W<wt[n-1])
//             return t[n][W]=profit(W,wt,val,n-1);
//   }

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
   int t[1001][1001];
   int profit(int W, int wt[], int val[], int n){
       if(n==0|| W==0)
            return 0;
        if(t[n][W]!=-1)
            return t[n][W];
         if(W>=wt[n-1])
            return t[n][W]=max(val[n-1]+profit(W-wt[n-1],wt,val,n-1),profit(W,wt,val,n-1));
        if(W<wt[n-1])
            return t[n][W]=profit(W,wt,val,n-1);
   }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
            memset(t,-1,sizeof(t));
            return profit(W,wt,val,n);
        
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends