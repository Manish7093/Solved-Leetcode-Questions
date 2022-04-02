class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int sum{0},max1{0};
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                sum=0;
            sum+=nums[i];
            max1=max(max1,sum);
        }
        return max1;
    }
};