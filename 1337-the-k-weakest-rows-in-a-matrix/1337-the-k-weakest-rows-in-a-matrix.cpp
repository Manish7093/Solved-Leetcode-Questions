class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>res;
        int sum{0};
        vector<pair<int,int>>p;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)
                    sum+=1;
            }
            p.push_back(make_pair(sum,i));
            sum=0;
        }
        sort(p.begin(),p.end());
        for(int i=0;i<k;i++){
            res.push_back(p[i].second);
        }
        return res;
    }
};