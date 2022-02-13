class Solution {
public:
    bool isvalid(vector<int>&piles,int mid,int n,int h){
        int count{0};
        int sum{0};
    
        for(int i=0;i<n;i++){
            if(piles[i]<=mid)
                count++;
            else if(piles[i]>mid ){
                int div=piles[i]/mid;
                count+=div;
                if(piles[i]%mid!=0) count++;
             
            }
           
        }
         if(h>=count)
                return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int start{1},end{0};
        for(int i=0;i<n;i++)
            end=max(end,piles[i]);
     
            
        while(start<=end){
            int mid=start+(end-start)/2;
    
           if(isvalid(piles,mid,n,h))
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
    }
};