class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i{0},j{0},cnt{0},max1{0};
        
        while(j<nums.size()){
            if(nums[j]==0) cnt++;
            while(cnt>1){
                if(nums[i]==0)
                     cnt--;
                i++;
            }
            
            max1=max(max1,j-i);
            j++;
        }
        return max1;
    }
};