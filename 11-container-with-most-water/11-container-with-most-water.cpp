class Solution {
public:
    int maxArea(vector<int>& height) {
       // 53/60 TLE
        /*int max1{0}; 
        for(int i=0;i<height.size();i++){
            for(int j=height.size()-1;j>=0;j--){
                max1=max(max1,(j-i)*(min(height[i],height[j])));
            }
        }
        return max1;*/
        int area{0};
       for(int left=0,right=height.size()-1;right>left;) {
           if(height[left]>=height[right]){
               area=max(area,(right-left)*min(height[right],height[left]));
               right--;
           }else{
               area=max(area,(right-left)*min(height[right],height[left]));
               left++;
           }
       }
        return area;
    }
};