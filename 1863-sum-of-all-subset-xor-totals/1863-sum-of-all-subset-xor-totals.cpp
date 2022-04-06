class Solution {
public:
    int backtrack(vector<int>nums,int index,int sum){
        if(index==nums.size()) return  sum;
        int withele=backtrack(nums,index+1,sum^nums[index]);
        int withoutele=backtrack(nums,index+1,sum);
        
        return withele+withoutele;
    }
    
    int subsetXORSum(vector<int>& nums) {
        return backtrack(nums,0,0);
    }
};