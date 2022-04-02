class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i{0},j{0},count{0},res{0};
        while(j<nums.size()){
            if(nums[j]==0) count++;
            while(count>k){
                if(nums[i]==0)
                    count--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};