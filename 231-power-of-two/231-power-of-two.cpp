class Solution {
public:
    bool isPowerOfTwo(int n) {
     //TC-O(logn)
        /*  double  res=n;
        if(n==1)
            return true;
        while(res>=1){
            
            res=res/2;
            if(res==1.0)
             return true;
        }
        return false;*/
    
        //TC-O(1)
     /*   if(n<=0)
            return false;
        return ((n&(n-1))==0);*/
        
     //TC -O(1)
       /* if(n<=0)
            return false;
        int rsmb=n&(-n);
        n=n-rsmb;
        if(n==0)
            return true;
        else
            return false;*/
        //Tc-O(logn)
        if(n<=0)
            return false;
        while(n%2==0){
            n=n/2;
        }
        return n==1;
            
        
    }
};