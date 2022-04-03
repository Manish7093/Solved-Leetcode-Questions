class Solution {
public:
    int atmost(vector<int> nums,int goal){
        int i{0},j{0},ans{0},sum{0};
        while(j<nums.size()){
            sum+=nums[j];
            j++;
            while(sum>goal &&j>i){
                sum-=nums[i];
                i++;
            }
        
            ans+=j-i+1;
        
            
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal)-atmost(nums,goal-1);
    }
};