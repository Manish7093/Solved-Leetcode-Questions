class Solution {
public:
   /* int mod(int a){
        if(a<0)
            return -(a);
        return a;
    }*/
    int twoCitySchedCost(vector<vector<int>>& costs) {
    //wrong ans 28/50 passed
        /*   int n=costs.size(),sum{0};
        int countA=n/2,countB=n/2;
        vector<pair<int,int>>store;
        for(int i=0;i<n;i++){
            store.push_back(make_pair(mod(costs[i][0]-costs[i][1]),i));
        }
        sort(store.rbegin(),store.rend());
        for(int j=0;j<n;j++){
            int i=store[j].second;
            if(costs[i][0]>=costs[i][1] && countB>0){
                countB--;
                sum+=costs[i][1];
            }
            else if(countA>0){
                countA--;
                sum+=costs[i][0];
            }
        }
        return sum;*/
        
        int n=costs.size()/2;
        vector<int>refund;
        int mincost{0};
        for(int i=0;i<costs.size();i++)
            mincost+=costs[i][0];
        
        for(int i=0;i<costs.size();i++)
            refund.push_back(costs[i][1]-costs[i][0]);
        sort(refund.begin(),refund.end());
        
        for(int i=0;i<n;i++)
            mincost+=refund[i];
        
        return mincost;
    }
};