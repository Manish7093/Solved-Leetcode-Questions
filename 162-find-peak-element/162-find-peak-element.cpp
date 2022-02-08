class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       /*int n=nums.size();
        if(n==1 || nums[0]>nums[1])
            return 0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
                return i;
        }
        return n-1;*/
        
        int n=nums.size();
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
          if(mid>0 && mid <n-1){
           if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
           else if(nums[mid-1]>nums[mid])
                end=mid-1;
            
            else
                start=mid+1;
          }
        else if(mid==0){
            if(n==1||nums[0]>nums[1])
                return 0;
            else
                return 1;
        }
            else if(mid==n-1){
                if(nums[n-1]>nums[n-2])
                    return n-1;
                else
                    return n-2;
            }
             
        }
        return n-1;
    }
};