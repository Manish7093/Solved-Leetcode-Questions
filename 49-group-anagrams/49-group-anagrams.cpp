class Solution {
public:
   
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mpp;
        for(auto s:strs){
            string t=s;
            sort(t.begin(),t.end());
            mpp[t].push_back(s);
        }
        for(auto s:mpp){
            res.push_back(s.second);
        }
        return res;
    }
};