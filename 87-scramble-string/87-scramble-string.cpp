class Solution {
public:
    unordered_map<string,bool>mp;
    bool isScramble(string s1, string s2) {
     
             if(s1.compare(s2)==0)
            return true;
        
        string key=s1+" "+s2;
        /*key.append(" ");
        key.append(s2);*/
        
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