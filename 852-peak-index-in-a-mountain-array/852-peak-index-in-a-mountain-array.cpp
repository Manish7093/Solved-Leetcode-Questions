class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
           if(mid>0 && mid<n-1){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1] )
                return mid;
            else if(arr[mid]<arr[mid-1])
                end=mid-1;
            else
                start=mid+1;
           }
            else if(arr[0]<arr[1])
                return 1;
            else
                return n-2;
        }
        return -1;
    }
};