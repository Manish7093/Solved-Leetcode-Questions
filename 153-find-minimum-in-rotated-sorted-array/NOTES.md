int findMin(vector<int>& nums) {
int n = nums.size();
int start = 0,end = n-1;
while(start<=end){
if(nums[start] < nums[end]) return nums[start]; // if the consider array is sorted then return nums[start] i.e. the first element of the array.'
if(end-start==1) return nums[start] > nums[end] ? nums[end] : nums[start]; // if the array contain only two element then return the smallest element.
int mid = start + (end - start)/2;
int prev = (mid + n -1 ) % n,next = (mid + 1) % n; // finding the of prev index  and next index to mid index.
// here modulus operation is done because let say if mid = 0 -->> then prev = last element index.
// [1,2,3,4,5] -->> if here we get mid = 0 then prev = (mid +n -1) % n = (0 + 5 -1) % 5 = 4 = index of last element.
if(nums[prev] > nums[mid] && nums[next] > nums[mid])
return nums[mid];
else if(nums[start] < nums[mid])
start = mid + 1;
else
end = mid - 1;
}
return nums[start]; // as such no need of it
}