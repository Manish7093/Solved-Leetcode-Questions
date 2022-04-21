MyHashSet() {
}
​
void add(int key) {
auto it = find(arr.begin(),arr.end(),key);
if(it == arr.end())
arr.push_back(key);
}
​
void remove(int key) {
auto it = find(arr.begin(),arr.end(),key);
if(it!=arr.end())
arr.erase(it);
}
​
​
bool contains(int key) {
auto it = find(arr.begin(),arr.end(),key);
if(it == arr.end())
return false;
return true;
}
private:
vector<int>arr;