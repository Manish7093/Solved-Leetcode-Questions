public bool IsSubsequence(string s, string t)
{
int count = 0;
for (int i = 0; i < t.Length && count < s.Length; i++)
{
if (s[count] == t[i]) count++;
}
return count == s.Length;
}