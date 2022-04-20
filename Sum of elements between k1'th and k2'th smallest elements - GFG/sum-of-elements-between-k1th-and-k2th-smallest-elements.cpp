// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long kth(long long A[],long long k,long long n){
        priority_queue<long long>maxheap;
        for(int i=0;i<n;i++){
            maxheap.push(A[i]);
            if(maxheap.size()>k)
                maxheap.pop();
            
        }
        return maxheap.top();
    }
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {   long long sum{0};
        long long res1=kth(A,K1,N);
        long long res2=kth(A,K2,N);
        for(int i=0;i<N;i++){
            if(A[i]>res1 && A[i]<res2)
                sum+=A[i];
        }
        return sum;
    }
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends