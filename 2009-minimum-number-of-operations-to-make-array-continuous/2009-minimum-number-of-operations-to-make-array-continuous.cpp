class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int i{0},j{0},ans{0};
        sort(nums.begin(),nums.end());
        nums.erase(unique(begin(nums),end(nums)),end(nums));
        while(j<nums.size()){
            while((nums[i]+n-1)<nums[j]) i++;
            ans=max(ans,j-i+1);
            j++;
        }
        return n-ans;
    }
};