class Solution {
public:
    int mySqrt(int x) {
       int i=1,count=0;
        while(x>=i){
            x=x-i;
            i+=2;
            count++;
        }
        return count;
    }
};