class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //TC-O(n)
        /* int n=nums.size();
        int xr{0};
        for(int i=0;i<n;i++){
            xr=xr^nums[i];
        }
        return xr;*/
   //TC-O(logn)
/*        int n=nums.size();
        int start=0,end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(mid%2==0){
                if(nums[mid]==nums[mid+1])
                    start=mid+2;
                else
                    end=mid;
            }
            else{
                if(nums[mid]==nums[mid-1])
                    start=mid+1;
                else
                    end=mid;
            }
        }
        return nums[start];*/
        int n=nums.size();
        int start=0,end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            int temp=mid^1;
            if(nums[mid]==nums[temp])
                start=mid+1;
            else
                end=mid;
        }
        return nums[start];
    }
};