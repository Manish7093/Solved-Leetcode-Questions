class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
   //TC-O(n1+n2)
        /*    int n1=nums1.size();
        int n2=nums2.size();
        nums1.resize(n1+n2);
        int a=n1-1,b=n2-1;
        int i=n1+n2-1;
        while(a>=0 && b>=0){
            if(nums1[a]>nums2[b])
                nums1[i--]=nums1[a--];
            else
                nums1[i--]=nums2[b--];
        }
        while(b>=0)
            nums1[i--]=nums2[b--];
        
        
        int n=n1+n2;
        if((n1+n2)%2==1)
            return nums1[((n+1)/2)-1];
        else
            return ((double)nums1[(n/2)-1]+(double)nums1[(n/2)])/2;
            */
        if(nums1.size()>nums2.size())
            return findMedianSortedArrays( nums2, nums1);
        int n=nums1.size(),m=nums2.size();
        int start=0,end=n;
        int medpos=(m+n+1)>>1;
        while(start<=end){
            int cut1=(start+end)>>1;
            int cut2=medpos-cut1;
            
            int l1=(cut1==0)?INT_MIN:nums1[cut1-1];
            int l2=(cut2==0)?INT_MIN:nums2[cut2-1];
            int r1=(cut1==n)?INT_MAX:nums1[cut1];
            int r2=(cut2==m)?INT_MAX:nums2[cut2];
            
            if(l1<=r2 && l2<=r1){
                if((m+n)%2==0)
                    return (max(l1,l2)+min(r1,r2))/2.0;
                else
                    return max(l1,l2);
            }
            else{
                if(l1>r2)
                    end=cut1-1;
                else
                    start=cut1+1;
            }
                
        }
        return 0.0;
    }
};