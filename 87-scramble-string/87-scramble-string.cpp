class Solution {
public:
    unordered_map<string,bool>mp;
   /* bool solve(string x,string y){
        string key=x+" "+y;
        if(mpp.find(key)!=mpp.end())
            return mpp[key];
        if(x.compare(y)==0){
            mpp[key]=true;
            return true;
        }
        if(x.length()<=1){
            mpp[key]=false;
            return false;
        }
        
        int n=x.length();
        bool flag=false;
        
        for(int i=1;i<=n-1;i++){
            if((solve(x.substr(0,i),y.substr(n-i,i)) && solve(x.substr(i),y.substr(0,n-i))) ||
              (solve(x.substr(0,i),y.substr(0,i)) && solve(x.substr(i),y.substr(i))))
                flag=true;
                break;
        }
        return mpp[key]=flag;
        
    }*/
    bool isScramble(string s1, string s2) {
      /*  vector<int>s1cnt(26);
        vector<int>s2cnt(26);
        for(int i=0;i<s1.size();i++){
            s1cnt[s1[i]-'a']++;
            s2cnt[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(s1cnt[i]!=s2cnt[i])
                return false;
        }
        return solve(s1,s2);*/
             if(s1.compare(s2)==0)
            return true;
        
        string key=s1;
        key.append(" ");
        key.append(s2);
        
        if(mp.find(key)!=mp.end())
            return mp[key];
        
        int n=s1.length();
        bool flag=false;
        
        for(int i=1;i<n;i++)
        {
        bool unswap=isScramble(s1.substr(0,i),s2.substr(0,i)) && 
        isScramble(s1.substr(i,n-i),s2.substr(i,n-i));
        bool swapped=isScramble(s1.substr(0,i),s2.substr(n-i,i)) && 
        isScramble(s1.substr(i,n-i),s2.substr(0,n-i));
            
        if(unswap || swapped)
            {
                flag=true;
                break;
            }
        }
        
        return mp[key]=flag;
    }
};