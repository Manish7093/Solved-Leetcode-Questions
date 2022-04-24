class Solution {
public:
bool issafe(vector<string>&temp,int i,int j){
for(int x=0;x<i;x++){
for(int y=0;y<temp.size();y++){
if(temp[x][y]=='Q'){
if(y==j || abs(x-i)==abs(y-j))
return false;
}
}
}
return true;
}
void backtrack(vector<vector<string>>&ans,vector<string>temp,int n,int i){
if(i==n){
ans.push_back(temp);
return;
}
for(int j=0;j<n;j++){
if(issafe(temp,i,j)){
temp[i][j]='Q';
backtrack(ans,temp,n,i+1);
temp[i][j]='.';
}
}
return;
}
vector<vector<string>> solveNQueens(int n) {
vector<vector<string>>ans;
vector<string>temp(n,string(n,'.'));
backtrack(ans,temp,n,0);
return ans;
}
};