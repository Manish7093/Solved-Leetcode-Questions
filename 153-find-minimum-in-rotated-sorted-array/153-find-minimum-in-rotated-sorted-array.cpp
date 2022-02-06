class Solution {
public:
    int findMin(vector<int>& nums) {
  //TC-O(n)
        /*    int min=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(min>=nums[i])
                min=nums[i];
        }
        return min;*/
 //TC-O(logn)
        int n=nums.size();
        int start=0,end=n-1;
      /*  if(nums[start]<=nums[end])
            return nums[start];*/
        while(start<=end){
            if(nums[start]<nums[end]) return nums[start];
            int mid=start+(end-start)/2;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
          //  if(end-start==1)return nums[start]>nums[end]?nums[end]:nums[start];
            if(nums[next]>=nums[mid] && nums[prev]>=nums[mid])
                return nums[mid];
           else if(nums[mid]>=nums[start])
                start=mid+1;
           else//(nums[end]>=nums[mid])
                end=mid-1;
        }
        return -1;
    }
};