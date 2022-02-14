class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
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
        
    }
};