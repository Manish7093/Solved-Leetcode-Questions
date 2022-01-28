class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
  //TLE TC-O(32n^2) sc-O(1)
        /*   int n=nums.size();
        int sum{0};
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int xr=nums[i]^nums[j];
                while(xr!=0){
                    sum =sum+1;
                    int rsmb=xr &(-xr);
                    xr=xr-rsmb;
                }
            }
        }
        return sum;*/
        
        int n=nums.size();
        int sum{0};
        for(int i=0;i<32;i++){
            int one{0};
            int zero{0};
            int mask=1<<i;
            for(int j=0;j<n;j++){
                if(mask&nums[j])
                    one++;
                if((mask&nums[j])==0)
                    zero++;
            }
            if(one ==n||zero==n)
                continue;
            else
                sum=sum+one*zero;
            
            
        }
        return sum;
    }
};