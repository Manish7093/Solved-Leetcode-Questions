class Solution {
public:
    struct comparator{
        bool operator()(string &b,string &a){
            if(a.size()!=b.size())
                return a.size()<b.size();
            return a<b;
        }
    };
    string kthLargestNumber(vector<string>& nums, int k) {
       //pased 137/219 runtime error due to very large input to stoi()
        /* priority_queue<int,vector<string>,greater<string>>maxheap;
        for(int i=0;i<nums.size();i++){
            maxheap.push(stoi(nums[i]));
            if(maxheap.size()>k)
                maxheap.pop();
        }
        string res="";
        res+=to_string(maxheap.top());
        return res;*/
        priority_queue<string, vector<string>,comparator>minheap;
        for(int i=0;i<nums.size();i++){
            minheap.push(nums[i]);
            if(minheap.size()>k)
                minheap.pop();
        }
        return minheap.top();
    }
};