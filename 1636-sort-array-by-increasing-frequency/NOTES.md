(cnt[n], -n) is a tuple, when you sort a tuple it will get sorted by first element then by second element and so on
In the problem it says if the count is same then sort in decreasing order so he multiplied n by -1 to maintain the second condition
So first cnt[n] is sorting by count and -n is sorting in decreasing order.
​
vector<int> frequencySort(vector<int>& A) {
unordered_map<int, int> count;
for (int a: A)
count[a]++;
sort(begin(A), end(A), [&](int a, int b) {
return count[a] == count[b] ? a > b : count[a] < count[b];
});
return A;
}