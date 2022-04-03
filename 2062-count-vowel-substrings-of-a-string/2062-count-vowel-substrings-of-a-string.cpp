class Solution {
public:
  /*  bool isvalid(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int atmost(string &s,int goal){
        int i{0},j{0},ans{0};
        unordered_map<char,int>mp;
        while(j<s.size()){
            if(!isvalid(s[j])){
                i=j+1;
                mp.clear();
                continue;
            }
            mp[s[j]]++;
            while(mp.size()>goal){
                if(--mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }*/
     bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
       int atMost(string &s, int goal) {
        int ans = 0, i = 0, j = 0, N = s.size();
        unordered_map<char, int> cnt;
        while(j<s.size()) {
            if (!isVowel(s[j])) {
                i = j + 1;
                cnt.clear();
                j++;
                continue;
            }
            cnt[s[j]]++;
            while (cnt.size() > goal) {
                if (--cnt[s[i]] == 0) cnt.erase(s[i]);
                i++;
            }
            ans += j - i + 1;
            j++;
        }
        return ans;
    }
    int countVowelSubstrings(string word) {
        return atMost(word, 5) - atMost(word, 4);
    }
};