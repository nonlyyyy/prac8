#include "board.hpp"

bool isBoardFull(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] == '.') {
                return false;
            }
        }
    }
    return true;
}
