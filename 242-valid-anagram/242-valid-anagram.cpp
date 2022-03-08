class Solution {
public:
    bool isAnagram(string s, string t) {
      //TC-O(n) sc-O(n) or O(1)<- bcz there are only 26 chars so map will have only 26 keys hence map will be of size 26;
        /*  unordered_map<char,int>mpp;
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
        return true;*/
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        
    }
};