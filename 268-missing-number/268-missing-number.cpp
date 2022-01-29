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
     /*   int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
            mpp[nums[i]]+=1;
        for(int i=0;i<n;i++)
            if(mpp[i]==0)
                return i;
        return n;*/
    
    //TC-O(n) SC-O(1) take total sum from 0 to n and then subtract each ele from arr at     //we get missing number
        /*   int n=nums.size();
        int sum{n};
        for(int i=0;i<n;i++)
            sum=sum+i;
        for(int i=0;i<n;i++)
            sum=sum-nums[i];
        return sum;
        */
    //TC
        int n=nums.size();
        int xr=0,i=0;
        for( i=0;i<n;i++)
            xr=xr^nums[i]^i;
        return xr^i;
        
    }
};