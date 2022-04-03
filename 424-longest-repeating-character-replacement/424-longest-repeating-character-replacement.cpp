class Solution {
public:

    int characterReplacement(string s, int k) {
        int i{0},j{0};
        vector<int>freq(26,0);
        int ans{0};
        int maxcount_tillNow{0};
        while(j<s.size()){
           int curEle_freq= ++freq[s[j]-'A'];
            maxcount_tillNow=max(maxcount_tillNow,curEle_freq);
            while((j-i+1)-maxcount_tillNow >k){
                freq[s[i]-'A']--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};