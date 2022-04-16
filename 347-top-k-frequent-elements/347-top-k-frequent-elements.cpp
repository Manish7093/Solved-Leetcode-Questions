class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    /*    unordered_map<int,int> map;
        for(int num : nums){
            map[num]++;
        }
        
        vector<int> res;
        // pair<first, second>: first is frequency,  second is number
        priority_queue<pair<int,int>> pq; 
        for(auto it = map.begin(); it != map.end(); it++){
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > (int)map.size() - k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;*/
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;
        for(auto it=mp.begin();it!=mp.end();it++){
            minheap.push({it->second,it->first});
            if(minheap.size()>k)
                minheap.pop();
        }
        while(minheap.size()>0){
            res.push_back(minheap.top().second);
            minheap.pop();
        }
        return res;
    }
};