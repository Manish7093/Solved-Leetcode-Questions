class Solution {
private:
unordered_map<char,string>map;
vector<string> res;
string subset;
public:
void initializeMap()
{
map['2']="abc";
map['3']="def";
map['4']="ghi";
map['5']="jkl";
map['6']="mno";
map['7']="pqrs";
map['8']="tuv";
map['9']="wxyz";
}
void backtrack(string digits,int start)
{
if(subset.size()>digits.size())
return;
if(digits.size()==subset.size())
res.emplace_back(subset);
for(auto c:map[digits[start]])
{
subset.push_back(c);
backtrack(digits,start+1);
subset.pop_back();
}
}
vector<string> letterCombinations(string digits) {
if(digits.empty())
return {};
initializeMap();
backtrack(digits,0);
return res;
}
};