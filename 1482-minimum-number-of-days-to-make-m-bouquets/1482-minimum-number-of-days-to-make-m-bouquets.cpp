class Solution {
public:
    bool isvalid(vector<int> & nums,int mid,int m,int k){
        int n=nums.size();
        int count{0},res{0};
        for(int i=0;i<n;i++){
            if(mid>=nums[i])
                count++;
            else
                count=0;
            if(count==k){
                res++;
                count=0;
            }
        }
        if(res<m)
            return false;
        else 
            return true;
        
        
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n=bloomDay.size();
        if(n<(m*k))
            return -1;
        int start{0},end{0};
        for(int i=0;i<n;i++){
            start=min(start,bloomDay[i]);
            end=end+bloomDay[i];
            end=min(end,1000000000);
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isvalid(bloomDay,mid,m,k))
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
        
    }
};