class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n=citations.size();
        int start=0,end=n-1;
        int cand{0};
        
        while(start<=end){
            int mid=start+(end-start)/2;
           if(citations[mid]==(n-mid))
              return citations[mid];
            if(citations[mid]<=(n-mid))
            { start=mid+1;
             cand=max(cand,citations[mid]);}
            else 
                end=mid-1;
        }
        return n-start;
    }
};