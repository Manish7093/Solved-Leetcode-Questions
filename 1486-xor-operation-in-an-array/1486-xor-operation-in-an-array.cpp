/*
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums(n);
        int xr{0};
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
            xr=xr^nums[i];
        }
        return xr;*/
      //TC-O(n)
        /*  int xr{0};
        for(int i=0;i<n;i++){
            int k=0;
            k=start+2*i;
            xr=xr^k;
        }
        return xr;
    
    }
};*/
class Solution {
public:
    int xorOperationB(int n,int start){
        if(n%2==0)
            return (n/2)&1;
        else
            return ((n/2)&1)^(start+n-1);
    }
    int xorOperationA(int n,int start){
        if(start&1)
            return (start-1)^xorOperationB(n+1,start-1);
        else
            return xorOperationB(n,start);
    }
    int xorOperation(int n, int start) {
    int res=2*(xorOperationA(n,start/2));
        if(n&start&1)
            res++;
        return res;
    
    }
};