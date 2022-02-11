class Solution {
public:
    bool isvalid(vector<int>&nums,int mid,int threshold){
        int n=nums.size();
       // int sum{0};
        // int mid=l+(r-l)/2;
            long long int sum=0;
            for(int i=0;i<nums.size();i++){
                if(mid==0)
                    return false;
                else if(nums[i]%mid==0){
                    sum+=(nums[i]/mid);
                } else{
                    sum+=(nums[i]/mid)+1;
                }
            }
        if(threshold>=sum)
            return true;
        else
            return false;
        
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        if(n>threshold)
            return -1;
        int start{0},end{0};
        for(int i=0;i<n;i++){
            start=min(start,nums[i]);
            end=end+nums[i];
            end=min(end,1000000);
        }
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isvalid(nums,mid,threshold))
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
    }
};