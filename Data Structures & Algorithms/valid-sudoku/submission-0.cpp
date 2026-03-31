class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> temp1(9);
        vector<int> temp2(9);
        vector<int> temp3(9);
        int qq;
        int ww;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]-'0'>0&&board[i][j]-'0'<=9){
                    temp1[board[i][j]-'0'-1]++;
                    if(temp1[board[i][j]-'0'-1]>1){
                        return false;
                    }
                }
                if(board[j][i]-'0'>0&&board[j][i]-'0'<=9){
                    temp2[board[j][i]-'0'-1]++;
                    if(temp2[board[j][i]-'0'-1]>1){
                        return false;
                    }
                }
            }
            for(int k=0;k<9;k++){
                temp1[k]=0;
                temp2[k]=0;
            }
        }
        for(int op=0;op<3;op++){
        for(int opw=0;opw<3;opw++){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[op*3+i][opw*3+j]-'0'>0&&board[op*3+i][opw*3+j]-'0'<=9){
                    temp3[board[op*3+i][opw*3+j]-'0'-1]++;
                    if(temp3[board[op*3+i][opw*3+j]-'0'-1]>1){
                        return false;
                    }
                }
            }
        }
        for(int k=0;k<9;k++){
                temp3[k]=0;
            }
        }
        }
        return true;
        
        
    }
};
