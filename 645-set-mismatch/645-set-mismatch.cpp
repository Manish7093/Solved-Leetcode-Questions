class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        sort(nums.begin(),nums.end());
        int sum{0};
        for(int i=1;i<=n;i++)
            sum=sum+i;
        for(int i=0;i<n;i++)
            sum=sum-nums[i];
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1])
            {
                res.push_back(nums[i]);
                break;   
            }
      }
        int k=res[0];
        if(sum>0)
            res.push_back(k+sum);
        else
            res.push_back(k+sum);
        return res;
    }
};