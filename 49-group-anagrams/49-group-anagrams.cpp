class Solution {
public:
   string cntsort(string s){
       int count[26]={0};
       for(char c:s)
           count[c-'a']++;
       string t;
       for(int i=0;i<26;i++){
           t+=string(count[i],i+'a');
       }
    return t;
   }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /*vector<vector<string>>res;
        unordered_map<string,vector<string>>mpp;
        for(auto s:strs){
            string t=s;
            sort(t.begin(),t.end());
            mpp[t].push_back(s);
        }
        for(auto s:mpp){
            res.push_back(s.second);
        }
        return res;*/
        
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mpp;
        for(auto s:strs)
            mpp[cntsort(s)].push_back(s);
        for(auto s:mpp){
            res.push_back(s.second);
        }
        return res;
    }
};