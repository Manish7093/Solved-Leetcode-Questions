class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        int mincost=0;
        int edgeused=0;
        
        vector<bool>visited(n);
        vector<int>mindist(n,INT_MAX);
        mindist[0]=0;
        
        while(edgeused<n){
            int curminedge=INT_MAX;
            int curnode=-1;
            for(int node=0;node<n;node++){
                if(!visited[node] && curminedge>mindist[node]){
                    curminedge=mindist[node];
                    curnode=node;
                }
            }
            mincost+=curminedge;
            edgeused++;
            visited[curnode]=true;
            for(int nextnode=0;nextnode<n;nextnode++){
                int weight=abs(points[curnode][0]-points[nextnode][0])+
                           abs(points[curnode][1]-points[nextnode][1]);
                if(!visited[nextnode] && mindist[nextnode]>weight)
                    mindist[nextnode]=weight;
            }
        }
        return mincost;
    }
};