public boolean searchMatrix(int[][] matrix, int target) {
if(matrix.length == 0 || matrix[0].length == 0) return false;
int m = matrix.length,n = matrix[0].length;
if(target < matrix[0][0] || target > matrix[m-1][n-1]) return false;
for(int i = m-1,j = 0;i>=0 && j < n;){          //start from the buttom-left corner
if(matrix[i][j] == target) return true;
else if(matrix[i][j] < target) j++;
else i--;
}
return false;
}