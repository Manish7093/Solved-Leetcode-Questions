class Solution {
public:
    bool hasAlternatingBits(int n) {
    //TC-O(32)
        /*   int d=n&1;
        while((n&1)==d){
            d=1-d;
            n=n>>1;
        }
        return n==0;*/
        //TC-O(1)    Can give overflow for very large nos but it is true
    /*    n = n ^ (n>>1);
        return (n & n+1) == 0;*/
        //TC-O(1)
         return (n & (n >> 1)) == 0 && (n | (n >> 2)) == n;
        
      
    }
};