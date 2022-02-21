class Solution {
public:
    int majorityElement(vector<int>& nums) {
     //TC-O(n) SC-O(n)
        /*  int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
            mpp[nums[i]]+=1;
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]>(n/2))
                return nums[i];
        }
        return 0;*/
    //TC-O(n) SC-O(1)
        int n=nums.size();
        int count=1,major=nums[0];
        for(int i=1;i<n;i++){
            if(count==0){
                count++;
                major=nums[i];
            }
            else if(major==nums[i])
                count++;
            else
                count--;
        }
     return major;   
    }
};