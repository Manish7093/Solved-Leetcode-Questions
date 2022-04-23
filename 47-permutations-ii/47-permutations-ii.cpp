class Solution {
public:
       void backtrack(vector<int>&nums,vector<vector<int>>&res,int i){
        if(i==nums.size())
        { res.push_back(nums); return;}
           unordered_set<int>set;
        for(int j=i;j<nums.size();j++){
            if(set.count(nums[j])==1)
                continue;
            set.insert(nums[j]);
            swap(nums[i],nums[j]);
            backtrack(nums,res,i+1);
           swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>res;
        backtrack(nums,res,0);
        return res;
    }
};