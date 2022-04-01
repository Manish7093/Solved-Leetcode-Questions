class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i{0},j{0};
        unordered_map<int,int>mp;
        int sum{0},res{0};
        while(j<nums.size()){
             while(mp[nums[j]]){
                sum=sum-nums[i];
                 mp[nums[i]]--;
                i++;
            }
            mp[nums[j]]++;
            sum+=nums[j];
            res=max(res,sum);
            j++;
        }
        return res;
    }
};