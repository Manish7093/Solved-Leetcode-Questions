class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.length();
        int xr=0;
        int i=0;
        for( i=0;i<n;i++){
            xr=xr^s[i]^t[i];
        }
        return xr^t[i];
    }
};