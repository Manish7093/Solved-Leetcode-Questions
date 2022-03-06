class Solution {
public:
    string lcs(string s1,string s2){
        int n=s1.length(),m=s2.length();
        int res=0;string ans;
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0)
                    dp[i][j]=0;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=0;
                if(dp[i][j]>res){
                     string temp=s1.substr(i-dp[i][j],dp[i][j]);
                    string rev=temp;
                    reverse(rev.begin(),rev.end());
                    if(temp==rev){    //check if common substring is palindromic or not
                        ans=temp;
                    res=dp[i][j];
                }
            }
        }
      
    }
    return ans;
}
    string longestPalindrome(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        return lcs(s,t);
    }
};