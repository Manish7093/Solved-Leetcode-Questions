class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     //TLE TC-O(n^2) sc-O(1)
     /*     int n=nums.size();
        int k{0};
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    k= nums[i];
                }
            }
        }
        
        return k;*/
   //TC-O(nlogn) sc-O(1) by modifying array
        /*   int n=nums.size();
        int k{0};
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])
                k=nums[i];
        }
        return k;*/
        //TC-O(n) sc-O(n)
        
        /*int n=nums.size();
        vector<int>freq(n+1,0);
        for(int i=0;i<n;i++){
            if(freq[nums[i]]==0)
                freq[nums[i]]+=1;
            else
                return nums[i];
        }
        return 0;*/
        
        // Using floyd's algorithm
        //tc-O(n) sc-O(1)

   /*   int n=nums.size();
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow; */
        int n=nums.size();
        int slow=nums[0],fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};