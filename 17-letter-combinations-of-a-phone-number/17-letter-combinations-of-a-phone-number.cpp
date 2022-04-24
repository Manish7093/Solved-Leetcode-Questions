class Solution {
public:
    unordered_map<char,string>mp;
    void backtrack(string digits,vector<string>&ans,int i,string s){
        if(i==digits.size()){
            ans.push_back(s);
            return;
        }
        for(int j=0;j<mp[digits[i]].size();j++){
            backtrack(digits,ans,i+1,s+mp[digits[i]][j]);
        }
        return;
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0)
            return ans;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        backtrack(digits,ans,0,"");
        return ans;
    }
};