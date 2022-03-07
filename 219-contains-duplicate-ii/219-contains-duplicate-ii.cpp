class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int,int>mpp;;
        int n=nums.size();
        for(int i=0;i<n;i++){
           if(mpp.find(nums[i])!=mpp.end() && i-mpp[nums[i]]<=k)
            return true;
           mpp[nums[i]]=i;
        }
       return false;
       /* int n=nums.size();
        if(nums.size()<=1)
            return false;
        for(int i=0;i<n;i++){
            for(int j=i+1;i<n;i++){
                if(abs(i - j) > k )
                    if(nums[i]==nums[j])
                        return false;
            }
        }
        return true;*/
        
        
    }
};