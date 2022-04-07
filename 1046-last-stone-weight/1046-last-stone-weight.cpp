class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n==1)
            return stones[0];
        sort(stones.begin(),stones.end());
        for(int i=n-1;i>0;i--){
            stones[i-1]=stones[i]-stones[i-1];
            sort(stones.begin(),stones.end());
        }
        return stones[0];
    }
};