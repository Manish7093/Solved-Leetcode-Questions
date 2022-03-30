class Solution {
public:
    int solve(vector<int> nums,int k){
        int i{0},j{0},count{0},ans{0};
        while(j<nums.size()){
            if( nums[j]%2==1)
                count++;
            if(count>k){
                while(count>k && i<=j ){
                    if(nums[i]%2==1)
                        count--;
                    i++;
                }
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};