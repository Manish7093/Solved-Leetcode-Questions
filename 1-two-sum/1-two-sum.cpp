class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    /*    int i{0};
        vector<int>result;
        for(i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
            
                if(nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    
                }
                
            }
        }
        return result;*/
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            if(mpp.find(target-nums[i])!=mpp.end()){
                return {mpp[target-nums[i]],i};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }
};
//Do again with hashmap for O(n) T.C.