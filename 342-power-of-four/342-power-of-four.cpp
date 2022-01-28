class Solution {
public:
    bool isPowerOfFour(int n) {
    
        /*if(n<=0)
            return false;
        while(n%4==0){
            n=n/4;
        }
        return n==1;*/
   //TC-O(1)
        
        /*   if(n<=0)
            return false;
        int mask=n&(n-1);
        if(mask==0 && (n-1)%3==0)
            return true;
        else
            return false;*/
     //TC-O(1)
        if(n<=0)
            return false;
        int mask=n&(n-1);
        if(mask==0 && (n&0x55555555)==n)
            return true;
        else
            return false;
        
    }
};