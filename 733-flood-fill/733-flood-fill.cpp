class Solution {
public:
  void solve(vector<vector<int>>&image,int c,int i,int j,int nc){
        if(i<0 || i==image.size() ||j<0 ||j==image[0].size()||image[i][j]!=c)
            return;
        image[i][j]=nc;
        solve(image,c,i+1,j,nc);
        solve(image,c,i-1,j,nc);
        solve(image,c,i,j+1,nc);
        solve(image,c,i,j-1,nc);
        return;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       
        int c=image[sr][sc];
        if(c==newColor) return image;
        solve(image,c,sr,sc,newColor);
        return image;
    }
};