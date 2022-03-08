class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(mpp.find(t[i])==mpp.end()||mpp[t[i]]<=0)
                return false;
            mpp[t[i]]--;
        }
        return true;
    }
};