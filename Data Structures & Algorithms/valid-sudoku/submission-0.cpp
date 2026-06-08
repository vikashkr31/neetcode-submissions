class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<vector<int>> checkRows(9,vector<int>(9,-1));
        vector<vector<int>> checkCol(9,vector<int>(9,-1));
        vector<vector<int>> checkBoxes(9,vector<int>(9,-1));

        for(int i=0;i<9;i++) {
            for(int j=0;j<9;j++) {
                if(board[i][j] == '.')
                    continue;

                int val = board[i][j] - '1';

                //validated rows
                if(checkRows[i][val] != -1)
                    return false;
                
                checkRows[i][val] = 1; 

                //validate cols
                if(checkCol[j][val] != -1)
                    return false;

                checkCol[j][val] = 1;

                //validate box
                if(checkBoxes[((i/3) * 3) + (j/3)][val] != -1)
                    return false;

                checkBoxes[((i/3) * 3) + (j/3)][val] = 1;
            }
        }

        return true;
    }
};
