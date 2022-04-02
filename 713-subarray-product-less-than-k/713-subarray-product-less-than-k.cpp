class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i{0},j{0};
        int pro{1},count{0};
        if(k<=1) return 0;
        while(j<nums.size()){
            pro*=nums[j];
            while(pro>=k){
                pro/=nums[i];
                i++;
            }
           
            count=count+j-i+1;
            j++;
    }
        return count;
}
};