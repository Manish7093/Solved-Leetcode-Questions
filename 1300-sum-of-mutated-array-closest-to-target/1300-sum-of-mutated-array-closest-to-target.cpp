class Solution {
public:
    int sumofarr(vector<int>arr,int mid){
        int sum{0};
        int n=arr.size();
        for(int i=0;i<n;i++)
            sum+=(arr[i]>mid)?mid:arr[i];
        return sum;
    }
    int findBestValue(vector<int>& arr, int target) {
     
        int n=arr.size();
        int sum{0},diff{INT_MAX},res{1};
        int max1=INT_MIN;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            max1=max(max1,arr[i]);   
        }
        if(sum==target)
            return arr[n-1];
        int start=0,end=max1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            int sum=sumofarr(arr,mid);    
            if(sum>target)
                end=mid-1;
            else
                start=mid+1;
            
            
            if(abs(sum-target)<diff || (abs(sum-target)==diff && res>mid)  ){
                res=mid;
                diff=abs(sum-target);
            }
            
        }
        return res;
    }
};