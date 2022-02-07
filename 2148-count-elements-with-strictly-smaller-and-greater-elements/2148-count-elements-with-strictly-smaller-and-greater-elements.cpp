class Solution {
public:
    int countElements(vector<int>& nums) {
     //TC-O(nlogn)
        /* int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=nums[0];
        int count{0};
        for(int i=1;i<n-1;i++){
           if(nums[i]>nums[0] && nums[i]<nums[n-1])
               count++;
            
        }
        return count;*/
        int n=nums.size();
        int min1=INT_MAX;
        int max1=INT_MIN;
        int count{0};
        for(int i=0;i<n;i++){
            min1=min(min1,nums[i]);
            max1=max(max1,nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]>min1 && nums[i]<max1)
                count++;
        }
        return count;
        
    }
};