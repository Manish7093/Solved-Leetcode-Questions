class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
            mpp[nums[i]]+=1;
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]>(n/3)){
                mpp[nums[i]]=0;
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};