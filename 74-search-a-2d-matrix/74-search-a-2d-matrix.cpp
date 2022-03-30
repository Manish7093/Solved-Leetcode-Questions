class Solution {
public:
    bool rowsearch(vector<vector<int>>&matrix,int rowindex,int target){
        int left=0;
        int right=matrix[0].size()-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(matrix[rowindex][mid]<target)
                left=mid+1;
           else if(matrix[rowindex][mid]>target)
                right=mid-1;
            else
                return true;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       //M1-TC-O(N^2) 
        /*int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;*/
       //M2-TC-O(n) 
     /*   int r=matrix.size();
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
        return false;*/
        //M3-O(log(mn))
        int r=matrix.size();
        int c=matrix[0].size();
        if(r==0||c==0)
            return false;
        int top=0;
        int down=r-1;
        int col=c-1;
        while(top<=down){
            int mid=(top+down)/2;
            if(matrix[mid][0]<=target && matrix[mid][col]>=target)
                return rowsearch(matrix,mid,target);
            if(matrix[mid][col]<target)
                top=mid+1;
            if(matrix[mid][0]>target)
                down=mid-1;
        }
        return false;
    }
};