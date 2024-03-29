class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        int r=matrix.size();
        int c=matrix[0].size();
        int i{0},j=c-1;
        while(i>=0 && i<r && j>=0 ){
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]>target)
                j--;
            else if(matrix[i][j]<target)
                i++;
        }
        return false;
    }
};