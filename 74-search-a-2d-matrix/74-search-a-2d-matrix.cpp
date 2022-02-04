class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       //TC-O(N^2) 
        /*int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;*/
        
        int r=matrix.size();
        int c=matrix[0].size();
        if(r==0||c==0)
            return false;
        if(matrix[0][0]>target || matrix[r-1][c-1]<target)
            return false;
        
        for(int i=r-1,j=0;i>=0 && j<c;){
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                j++;
            else
                i--;
        }
        return false;
    }
};