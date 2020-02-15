/*
 * @lc app=leetcode.cn id=36 lang=cpp
 *
 * [36] 有效的数独
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][10] = {false};// 哈希表存储每一行的每个数是否出现过，默认初始情况下，每一行每一个数都没有出现过
        // 整个board有9行，第二维的维数10是为了让下标有9，和数独中的数字9对应。
        bool col[9][10] = {false};// 存储每一列的每个数是否出现过，默认初始情况下，每一列的每一个数都没有出现过
        bool box[9][10] = {false};// 存储每一个box的每个数是否出现过，默认初始情况下，在每个box中，每个数都没有出现过。整个board有9个box。
        for(int i=0; i<9; i++){
            for(int j = 0; j<9; j++){
                // 遍历到第i行第j列的那个数,我们要判断这个数在其所在的行有没有出现过，
                // 同时判断这个数在其所在的列有没有出现过
                // 同时判断这个数在其所在的box中有没有出现过
                if(board[i][j] == '.') continue;
                int curNumber = board[i][j]-'0';
                if(row[i][curNumber] || 
                    col[j][curNumber] || 
                    box[j/3 + (i/3)*3][curNumber]) return false; 

                row[i][curNumber] = col[j][curNumber] = box[j/3 + (i/3)*3][curNumber] = true;
            }
        }
        return true;
    }
};
// @lc code=end

