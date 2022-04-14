class Solution {
public:
   /* int partition(vector<int>&nums,int left,int right){
        int pivot=nums[left],l=left+1,r=right;
        while(l<=r){
            if(pivot>nums[l] && pivot<nums[r]){
                swap(nums[l++],nums[r--]);
            }if(nums[l]>=pivot)
                l++;
            if(nums[r]<=pivot)
                r--;
        }
        swap(nums[left],nums[r]);
        return r;
    }*/
    int findKthLargest(vector<int>& nums, int k) {
       /* priority_queue<int,vector<int>,greater<int>> minheap;
        for(int i=0;i<nums.size();i++){
            minheap.push(nums[i]);
            if(minheap.size()>k)
                minheap.pop();
        }
        return minheap.top();*/
        //Using Quick select
      /*  int left=0,right=nums.size()-1,kth;
        while(true){
            int idx=partition(nums,left,right);
            if(idx==k-1){
                kth=nums[idx];
                break;
            }
            if(idx<k-1){
                left=idx+1;
            }else{
                right=idx-1;
            }
        }
        return kth;*/
        
        //Using sorting 
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n-k];
    }
};