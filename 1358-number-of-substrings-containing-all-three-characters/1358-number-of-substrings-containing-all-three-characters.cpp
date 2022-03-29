class Solution {
public:
    int numberOfSubstrings(string s) {
        int i{0},j{0},count{0};
        int n=s.size();
        unordered_map<char,int>mp;
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end())
                mp[s[j]]++;
            else
                mp[s[j]]=1;
            while(mp.size()==3){
                count+=n-j;
                if(mp.find(s[i])!=mp.end())
                    mp[s[i]]--;
                if(mp[s[i]]==0)
                    mp.erase(s[i]);
                
                i++;
        }
            j++;
    }
        return count;
    }
};