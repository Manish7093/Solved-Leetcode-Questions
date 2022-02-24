class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      //tle
        /* int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
          int a=0,b=0;
            for(int j=i;j<n;j++){
            if(nums[j]==0)
                a++;
             else
                b++;
            if(a==b)
             cnt=max(j-i+1,cnt);
            }
        }
        return cnt;*/
        
        int n=nums.size();
        unordered_map<int,int>mpp;
        int sum{0},subarrsum{0};
        for(int i=0;i<n;i++){
            sum+=nums[i]==0?-1:1;
            if(sum==0){
                if(subarrsum<i+1)
                    subarrsum=i+1;
            }
            else if(mpp.find(sum)!=mpp.end()){
                if(subarrsum<i-mpp[sum])
                    subarrsum=i-mpp[sum];
            }
            else{
                mpp[sum]=i;
            }
        }
        return subarrsum;
    }
};