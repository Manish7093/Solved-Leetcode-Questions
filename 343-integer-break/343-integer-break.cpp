class Solution {
public:
    int integerBreak(int n) {
        vector<int>d(n+1,0);
        d[0]=1;
        for(int i=1;i<n;i++){
            for(int j=i;j<=n;j++)
                d[j]=max(d[j],d[j-i]*i);
        }
        return d[n];
    }
};