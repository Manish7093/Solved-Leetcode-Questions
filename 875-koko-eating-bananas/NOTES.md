int minEatingSpeed(int[] piles, int h) {
int left = 1;
int right = 1000000000;
while(left <= right){ // performing binary search
int mid = left + (right - left) / 2; // doing in that way, to handle overflow instead of left + right / 2
// if koko can eat, mid bananas per hour in less then or equals to h time
if(canEatInTime(piles, mid, h)) right = mid - 1; // means decrement our right pointer to optimise better solution
else left = mid + 1; // if not true, increment left pointer
}
return left; // bcz left pointer hold our optimize k, at the end of BS
}
Step 2 :
boolean canEatInTime(int piles[], int k, int h){
int hours = 0; // track count of hours
for(int pile : piles){
// performing claculation, take an example
// k = 4
// pile = 10
​
// pile / k => 10 / 4 = 2
// pile % k => 2, so we need to have one more hour to eat remaining bananas left over as remainder
// hours = 3;
int div = pile / k;
hours += div;
if(pile % k != 0) hours++; // if remainder value is not 0, we need to have an extra hour
}
return hours <= h;