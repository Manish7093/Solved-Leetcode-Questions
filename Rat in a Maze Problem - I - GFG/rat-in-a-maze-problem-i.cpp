// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
   void backtrack(vector<string> &ans,vector<vector<int>> &m,int n,int i,int j,string s){
        if(i<0 || i>=n || j<0 || j>=n || m[i][j]!=1)
            return;
        if(i==n-1 && j==n-1)
       {   ans.push_back(s);  
           return ;}
        m[i][j]=-1;
        backtrack(ans,m,n,i+1,j,s+'D');
        backtrack(ans,m,n,i,j-1,s+'L');
        backtrack(ans,m,n,i,j+1,s+'R');
        backtrack(ans,m,n,i-1,j,s+'U');
        m[i][j]=1;
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        string s="";
        vector<string>ans;
        backtrack(ans,m,n,0,0,s);
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends