/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findPeak(MountainArray &A) {
    int n=A.length();
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
           if(mid>0 && mid<n-1){
            if(A.get(mid)>A.get(mid-1) && A.get(mid)>A.get(mid+1) )
                return mid;
            else if(A.get(mid)<A.get(mid-1))
                end=mid-1;
            else
                start=mid+1;
           }
            else if(mid==0){
            if(n==1||A.get(0)>A.get(1))
                return 0;
            else
                return 1;
        }
            else if(mid==n-1){
                if(A.get(n-1)>A.get(n-2))
                    return n-1;
                else
                    return n-2;
            }
        }
        return -1;
}
    //    int findPeak(MountainArray arr) {
    //     int left = 0;
    //     int right = arr.length() - 1;
    //     while (left  < right) {
    //         int mid = left + (right - left) / 2;
    //         if (arr.get(mid) < arr.get(mid + 1)) {
    //             left = mid + 1;
    //         } else {
    //             right = mid;
    //         }
    //     }
    //     return left;
    // }
    
    int binary(MountainArray &A,int start,int end,int target){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(A.get(mid)==target)
        return mid;
        else if(A.get(mid)>=target)
            end=mid-1;
        else
            start=mid+1;
    }
    return -1;
}
 int Dbs(MountainArray &A,int start,int end,int target) {
        while(start<=end){
        int mid=start+(end-start)/2;
        if(A.get(mid)==target)
        return mid;
        else if(A.get(mid)<target)
            end=mid-1;
        else
            start=mid+1;
    }
    return -1;
    }
    

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int peakIndex = findPeak(mountainArr);
        int res = -1;
        if (target >= mountainArr.get(0) && target <= mountainArr.get(peakIndex))
        {
            res = binary(mountainArr,0,peakIndex, target);
        }
        if (res == -1) { //if not found result on the left
            res = Dbs(mountainArr,peakIndex + 1, n - 1,target);
        }
        return res;
    }
};