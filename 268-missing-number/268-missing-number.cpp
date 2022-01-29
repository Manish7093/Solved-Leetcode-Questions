class Solution {
public:
    int missingNumber(vector<int>& nums) {
     //Tc-O(nlogn) SC-O(1)
        /*   int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
            if(i!=nums[i])
                return i;
        return n;*/
        
    //TC-O(n) Sc-O(n)
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
            mpp[nums[i]]+=1;
        for(int i=0;i<n;i++)
            if(mpp[i]==0)
                return i;
        return n;
        
    }
};