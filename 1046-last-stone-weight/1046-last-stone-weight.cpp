class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //TC-O(n^2 *logn);
        /*int n = stones.size();
        sort(stones.begin(),stones.end());
        for(int i=n-1;i>0;i--){
            stones[i-1]=stones[i]-stones[i-1];
            sort(stones.begin(),stones.end());
        }
        return stones[0];*/
        priority_queue<int>pq(stones.begin(),stones.end());
        while(pq.size()>1){
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(x!=y)
                pq.push(y-x);
        }
        return pq.empty()?0:pq.top();
    }
};