class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>res(n,vector<int>(n));
        int c=1;
        int top=0,left=0,right=n-1,bottom=n-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right && c<=n*n;i++)
            { res[top][i]=c++; }
            for(int i=top+1;i<=bottom-1 && c<=n*n;i++)
            {  res[i][right]=c++; }
            for(int i=right;i>=left && c<=n*n;i--)
            {  res[bottom][i]=c++; }
            for(int i=bottom-1;i>=top+1 && c<=n*n;i--)
            {  res[i][left]=c++; }
            left++,right--,top++,bottom--;
        }
        return res;
    }
};