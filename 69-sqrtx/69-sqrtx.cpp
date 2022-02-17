class Solution {
public:
    //Tc-O(n)
    /*int mySqrt(int x) {
       int i=1,count=0;       //Repeatedly subtract given no with odd no starting from 1  
        while(x>=i){            // eg x=25, now x=25-1  we got x=24 and count=1
            x=x-i;                 //x=24-3=21 count=2,  x=21-5=16 count=3,  x=16-7=9 count=4,
            i+=2;               //x=9-9=0 count=5 which is our ans
            count++;
        }
        return count;*/
     int mySqrt(int x) {
        int start=1,end=x,count=0;
        while(start<=end){
           int mid=start+(end-start)/2;
            if(mid==(x/mid))
                return mid;
            else if(mid<x/mid)
                start=mid+1;
            else
                end=mid-1;
        } 
        return end;
    }
};