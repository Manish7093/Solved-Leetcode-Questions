/*class Solution {
public:
    int small(vector<int>nums){
        int n=nums.size();
        int start=0,end=n-1;
        while(start<=end){
           if(nums[start]<nums[end])
               return start;
        
            int mid=start+(end-start)/2;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(nums[next]>=nums[mid] && nums[prev]>=nums[mid])
                return mid;
            else if(nums[mid]>=nums[start])
                start=mid+1;
            else
                end=mid-1;
    }
        return -1;
}
    int binarys(vector<int>nums,int start,int end,int target){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                end=mid-1;
            else
                start=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int sm=small(nums);
        if(target>nums[n-1])
           return binarys(nums,0,sm-1,target);
        else
           return binarys(nums,sm,n-1,target);
        
    }
};*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n=nums.size();
        int start=0,end=n-1;
        
        while(start<=end){
             int mid=start+(end-start)/2;
            if(target==nums[mid])
                return mid;
            else if(nums[mid]>=nums[start]){
                if(target>=nums[start] && target<=nums[mid]){
                    end=mid-1;
                }
                else
                    start=mid+1;
            }
            else{
                if(target<=nums[end] && target>=nums[mid])
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        return -1;
        
    }
};