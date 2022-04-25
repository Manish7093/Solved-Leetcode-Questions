class Solution {
public:
    bool isvalid(vector<vector<char>>A,int a,int b,int c){
        for(int i=0;i<9;i++){
            if(A[a][i]==c+'0')
                return false;
            if(A[i][b]==c+'0')
                return false;
        }
        int key=(a/3)*3+(b/3);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int dummy=(i/3)*3+j/3;
                if(dummy==key){
                    if(A[i][j]==c+'0')
                        return false;
                }
            }
        }
        return true;
    }
    bool backtrack(vector<vector<char>>&A,int i,int j){
        if(i==8 && j==9)
            return true;
        if(j==9)
            i++,j=0;
        if(A[i][j]!='.')
            return backtrack(A,i,j+1);
        for(int k=1;k<=9;k++){
            if(isvalid(A,i,j,k)){
                A[i][j]=k+'0';
                bool f=backtrack(A,i,j+1);
                if(f)
                    return true;
            }
            A[i][j]='.';
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        bool res=backtrack(board,0,0);
    }
};