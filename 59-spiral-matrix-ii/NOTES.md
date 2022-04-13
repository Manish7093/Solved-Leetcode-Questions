vector<int> spiralOrder(vector<vector<int>>& matrix) {
vector<int>res;
int r=matrix.size();
int c=matrix[0].size();
int top=0,bottom=r-1,left=0,right=c-1;
while(res.size()<r*c ){
for(int i=left;i<=right && res.size()<r*c;i++)
res.push_back(matrix[top][i]);
for(int i=top+1;i<=bottom-1 && res.size()<r*c;i++)
res.push_back(matrix[i][right]);
for(int i=right;i>=left && res.size()<r*c;i--)
res.push_back(matrix[bottom][i]);
for(int i=bottom-1;i>=top+1 && res.size()<r*c;i--)
res.push_back(matrix[i][left]);
left++,right--,top++,bottom--;
}
return res;
}
};