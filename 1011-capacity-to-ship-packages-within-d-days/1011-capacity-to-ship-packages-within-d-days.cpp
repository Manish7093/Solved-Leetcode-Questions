class Solution {
public:
    bool isvalid(vector<int>&weights,int mid,int days){
        int n=weights.size();
        int ship=1;
        int sum{0};
        for(int i=0;i<n;i++){
            sum=sum+weights[i];
            if(sum>mid){
                ship++;
                sum=weights[i];
            }
            if(ship>days)
                return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        if(days>n)
            return -1;
        int start{0},end{0};
        for(int i=0;i<n;i++){
            start=max(start,weights[i]);
            end=end+weights[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isvalid(weights,mid,days))
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
    }
};