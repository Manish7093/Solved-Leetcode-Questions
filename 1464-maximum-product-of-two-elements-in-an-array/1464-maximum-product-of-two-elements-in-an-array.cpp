class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        int k;
        for(int i=0;i<nums.size();i++)
        {max1=max(max1,nums[i]);}
        for(int i=0;i<nums.size();i++){
            if(max1==nums[i]){
                k=i;
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i!=k)
                max2=max(max2,nums[i]);
        }
        return (max1-1)*(max2-1);
    }
};