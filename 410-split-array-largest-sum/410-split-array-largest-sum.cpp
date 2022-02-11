class Solution {
public:
    bool isvalid(vector<int>&nums,int mid,int m){
       int n=nums.size();
        int student=1;
        int sum{0};
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum>mid){
                student++;
                sum=nums[i];
            }
            if(student>m)
                return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
       int n=nums.size();
        if(m>n)
            return -1;
        int start{0},end{0};
        for(int i=0;i<n;i++){
            start=max(start,nums[i]);
            end=end+nums[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isvalid(nums,mid,m))
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
    }
};