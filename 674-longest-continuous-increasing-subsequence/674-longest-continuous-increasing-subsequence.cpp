class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int count{1},max1=INT_MIN;
        if(n==1)
            return 1;
        for(int i=1;i<n;i++){
            
            if(nums[i-1]<nums[i])
            {  count++;
                 max1=max(count,max1);
            }
            else
            {   
                
               max1=max(count,max1);
                count=1;
            }
        }
        return  max1;
    }
};