class Solution {
public:
   
    string reverseStr(string s, int k) {
     /*for(int i=0;i<s.size();i+=2*k)
         reverse(s.begin()+i,min(s.begin()+i+k,s.end()));
    return s;*/
        int n=s.size();
        for(int left=0;left<s.size();left+=2*k)
            for(int i=left,j=min(left+k-1,n-1);i<j;i++,j--)
                swap(s[i],s[j]);
        return s;
    }
};