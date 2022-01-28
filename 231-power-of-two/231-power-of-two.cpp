class Solution {
public:
    bool isPowerOfTwo(int n) {
        double  res=n;
        if(n==1)
            return true;
        while(res>=1){
            
            res=res/2;
            if(res==1.0)
             return true;
        }
        return false;
    }
};