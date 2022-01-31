class Solution {
public:
    int xorOperation(int n, int start) {
       /* vector<int>nums(n);
        int xr{0};
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
            xr=xr^nums[i];
        }
        return xr;*/
        int xr{0};
        for(int i=0;i<n;i++){
            int k=0;
            k=start+2*i;
            xr=xr^k;
        }
        return xr;
    }
};