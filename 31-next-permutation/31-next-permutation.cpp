class Solution {
public:
   
    void nextPermutation(vector<int>& nums) {
//       TC-O(N) SC-O(1)
        /* int n=nums.size();
        int k,l;
        for( k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1])
                break;
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for( l=n-1;l>k;l--){
                if(nums[l]>nums[k])
                    break;
            }
            swap(nums[l],nums[k]);
            reverse(nums.begin()+k+1,nums.end());
        }*/
//         direct with c++ library function with #include<algorithm>
        // next_permutation(nums.begin(),nums.end());
        int k,l,n=nums.size();
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1])
                break;
        }
        if(k<0)
            reverse(nums.begin(),nums.end());
        else
        {
            for(l=n-1;l>k;l--){
                if(nums[k]<nums[l])
                    break;
            }
            swap(nums[l],nums[k]);
            reverse(nums.begin()+k+1,nums.end());
        }
        

    }
};