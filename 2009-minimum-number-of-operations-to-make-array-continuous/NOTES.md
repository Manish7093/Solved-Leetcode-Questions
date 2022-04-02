class Solution {
public:
int minOperations(vector<int>& A) {
int N = A.size(), i = 0, j = 0, ans = 0;
sort(begin(A), end(A));
A.erase(unique(begin(A), end(A)), end(A)); // only keep unique elements
for (int M = A.size(); j < M; ++j) {
while (A[i] + N <= A[j]) ++i; // let `i` point to the first element that is in range -- `A[i] + N > A[j]`
ans = max(ans, j - i + 1);
}
return N - ans;
}
};get the length of the longest subarray whose difference between min and max elements is N - 1
The idea behind sliding window is for every element, we assume the element is minimum (start) value in the array and calculate the number of operation needed to make this assumption true. We do this for all elements and find the smallest number of operation which is answer.
​
​
class Solution {
public:
int minOperations(vector<int>& nums) {
int k = nums.size() - 1;  // max size of sliding window is the target gap between min ani max elements
sort(nums.begin(), nums.end()); // sorting in O(nlogn) time so that we can remove duplicates and slide over the array
int newLen = unique(nums.begin(), nums.end()) - nums.begin();  // remove adjacent duplicates with STL unique
int l = 0, r = 0, fin = 1; //  initialize left and right pointers and the minimum elements in the window
while (r < newLen) {  // iterate over the new unique array
if (l == r)
r++;  //  if the window is closed, open it ;)
else if (nums[r] - nums[l] > k)
l++;  //  if window becomes bigger than allowed size, shrink it
else {
fin = max(fin, r - l + 1);  //  if window is in allowed size, maximize the number of elements in the window
r++;  // slide the right side
}
}  //  at this point, we have maximized the number of elements at any time inside the window
return k - fin + 1;   //  return the missing elements in that window
}
};