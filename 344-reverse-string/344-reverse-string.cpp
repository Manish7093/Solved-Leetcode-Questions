class Solution {
public:
    void reverseString(vector<char>& s) {
      /*  string res="";
        int n=s.size();
        for(int i=n-1;i>=0;i--)
            res+=s[i];
        for(int i=0;i<res.size();i++)
            s[i]=res[i];*/
        
        int n=s.size();
        int l=0,r=n-1;
        char c;
        while(l<r){
            c=s[l];
            s[l]=s[r];
            s[r]=c;
            l++,r--;
        }
    }
};