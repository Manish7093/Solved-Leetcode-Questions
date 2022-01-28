1. Using Reminder-divident method:-
​
class Solution {
public:
bool isPowerOfTwo(int n) {
if(n==0) return false;
while(n%2==0) n/=2;
return n==1;
}
};
2. Using Reminder-divident method via Recursion:-
​
class Solution {
public:
bool isPowerOfTwo(int n) {
if(n==0) return false;
return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));
}
};
​
​