class Solution {
public:
   
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a:nums)
            mp[a]++;
        sort(nums.begin(),nums.end(),[&](int &a,int &b){return mp[a]==mp[b]?a>b:mp[a]<mp[b];});
        return nums;
    }
};