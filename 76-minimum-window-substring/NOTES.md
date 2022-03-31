string minWindow(string s, string t) {
//declare window variables
int i=0,j=0;
​
int len=INT_MAX; //to store the length of minimum window
int startIdx = 0;
string result;//finally return  s.substr(startIdx,len)
//create freq. map
unordered_map<char,int> mp;
for(int i=0 ; i<t.length();i++ )
mp[t[i]]++;
int count=mp.size(); //unique no of char
​
while(j<s.length())
{
// do calculation
​
if(mp.find(s[j])!=mp.end())
{
mp[s[j]]--;
if(mp[s[j]]==0)
count--;
}