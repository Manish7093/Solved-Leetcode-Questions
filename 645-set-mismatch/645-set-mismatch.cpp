class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
  // Tc-O(nlogn) sc-O(1)
        /*   int n=nums.size();
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
        return res;*/
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++){
           if(nums[abs(nums[i])-1]<0)
               res.push_back(abs(nums[i]));
            else
                nums[abs(nums[i])-1]*=-1;
        }
        for(int i=0;i<n;i++)
            if(nums[i]>0)
                res.push_back(i+1);
        return res;
        
    }
};