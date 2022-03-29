class Solution {
public:
    int solve(vector<int>& nums, int k){
    int i{0},j{0};
    int count{0};
    unordered_map<int,int>mp;
    while(j<nums.size()){
        int ch=nums[j];
        if(mp.find(ch)!=mp.end()){
            int freq=mp[ch];
            freq++;
            mp[ch]=freq;
        }
        else{
            mp[ch]=1;
        }
     if(mp.size()>k){
            while(mp.size()>k && i<nums.size()){
                if(mp.find(nums[i])!=mp.end()){
                    int freq=mp[nums[i]];
                    freq--;
                    mp[nums[i]]=freq;
                }
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
        
        }count+=j-i+1;
        j++;
    
    }
    return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums, k)-solve(nums, k-1);
    }
};