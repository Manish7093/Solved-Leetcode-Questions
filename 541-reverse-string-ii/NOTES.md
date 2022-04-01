class Solution {
public:
//1. reverse k elements and  jump 2k elements
string reverseStr(string s, int k) {
for (int i = 0; i < s.size(); i += 2*k) {
reverse(s.begin()+i, min(s.begin()+i+k, s.end()));
}
return s;
}
};
//
string reverseStr(string s, int k) {
for (int left = 0; left < s.size(); left += 2 * k) {
for (int i = left, j = min(left + k - 1, (int)s.size() - 1); i < j; i++, j--) {
swap(s[i], s[j]);
}
}
return s;
}
};