class Solution {
public:
 //TC-O(n^2) passed all test cases but gives time limit exceeded
    /* int getindex(vector<vector<int>>& intervals,int key){
        int n=intervals.size();
        for(int i=0;i<n;i++){
            if(intervals[i][0]==key)
                return i;
        }
        for(int i=0;i<n;i++){
            if(intervals[i][0]>key)
                return i;
        }
        return -1;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
          vector<int>res(n);
        if(n==1){ res.resize(0);res.push_back(-1);return res;}
     
        for(int i=0;i<n;i++){
            res[i]=getindex(intervals,intervals[i][1]);
        }
        return res;*/
   vector<int> findRightInterval(vector<vector<int>>& intervals) {
         vector<int> result;
		map<int, int> m;
		for(int i = 0; i < intervals.size(); i++)
			m[intervals[i][0]] = i;
		for(int i = 0; i < intervals.size(); i++)
		{
			auto it = m.lower_bound(intervals[i][1]);
			if(it != m.end())
				result.push_back(it -> second);
			else
				result.push_back(-1);
		}
		return result;
    }
};