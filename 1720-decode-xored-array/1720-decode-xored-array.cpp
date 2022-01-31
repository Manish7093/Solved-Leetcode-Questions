class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
       int n=encoded.size();
        vector<int>res(n+1);
        res[0]=first;
        int i{0};
        for( i=1;i<n;i++){
            res[i]=encoded[i-1]^res[i-1];
        }
        res[n]=res[n-1]^encoded[n-1];
        return res;
    }
};