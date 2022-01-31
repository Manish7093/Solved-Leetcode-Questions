class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n=encoded.size()+1;
        vector<int>res(n);
        int a{0};
        for(int i=0;i<=n;i++){
            a=a^i;
            if(i<n && i%2==1)
                a=a^encoded[i];
        }
        res[0]=a;
        for(int i=0;i<n-1;i++){
            res[i+1]=res[i]^encoded[i];
        }
        return res;
    }
};