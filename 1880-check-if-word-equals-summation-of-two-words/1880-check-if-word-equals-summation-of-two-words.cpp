class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i{0}, j{0},ans{0};
        int cost{0};
        
        while(j<s.size()){
                cost+=abs(t[j]-s[j]);  
            while(cost>maxCost){
                cost-=abs(t[i]-s[i]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};