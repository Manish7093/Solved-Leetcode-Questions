class Solution {
public:
    string minWindow(string s, string t) {
        int i{0},j{0};
        int minlen=INT_MAX;
        int start{0};
        string res;
        unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++)
            mp[t[i]]++;
        int count=mp.size();
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0)
                    count--;
            }
            if(count>0) j++;
            else if(count==0){
                if(minlen>j-i+1){
                    minlen=min(minlen,j-i+1);
                    start=i;
                    res=s.substr(start,minlen);
                }
                while(count==0){
                    if(mp.find(s[i])==mp.end()){
                        i++;
                     if(minlen>j-i+1){
                         minlen=min(minlen,j-i+1);
                         start=i;
                         res=s.substr(start,minlen);
                     }   
                }else{
                        mp[s[i]]++;
                        if(mp[s[i]]==1){
                            i++;
                            count++;
                        }
                        else{
                            i++;
                            if(minlen>j-i+1){
                                minlen=min(minlen,j-i+1);
                                start=i;
                                res=s.substr(start,minlen);
                            }
                        }
                    }
                }
                j++;
            }
        }
        return minlen==INT_MAX?"":res;
    }
};