class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        unordered_set<char> boxes[3][3];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                char val = board[i][j];

                if (val == '.') {
                    continue;
                }

               int boxrow=i/3;
               int boxcol=j/3;

                if (rows[i].count(val) ||
                    cols[j].count(val) ||
                    boxes[boxrow][boxcol].count(val)) {
                    return false;
                }

                rows[i].insert(val);
                cols[j].insert(val);
                boxes[boxrow][boxcol].insert(val);
            }
        }

        return true;
    }
};