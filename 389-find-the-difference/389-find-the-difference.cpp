class Solution {
public:
    char findTheDifference(string s, string t) {
    //TC-O(n) SC-O(1)
        /*   int n=s.length();
        char xr=0;
        int i=0;
        for( i=0;i<n;i++){
            xr=xr^s[i]^t[i];
        }
        return xr^t[i];*/
        
    //TC-O(nlogn) sc-O(1)
        int n=s.length();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++){
            if(s[i]!=t[i])
                return t[i];
        }
        return t[n];
    }
};