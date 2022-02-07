class Solution {
public:
    int countElements(vector<int>& nums) {
       int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=nums[0];
        int count{0};
        for(int i=1;i<n-1;i++){
           if(nums[i]>nums[0] && nums[i]<nums[n-1])
               count++;
            
        }
        return count;
    }
};