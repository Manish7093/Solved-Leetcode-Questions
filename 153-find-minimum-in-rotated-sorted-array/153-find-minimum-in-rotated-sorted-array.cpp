class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(min>=nums[i])
                min=nums[i];
        }
        return min;
    }
};