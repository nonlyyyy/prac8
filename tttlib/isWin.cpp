#include "board.hpp"

bool isWin(const std::vector<std::vector<char>>& board, char symbol) {
    for (int i = 0; i < board.size(); i++) {
        bool rowWin = true, colWin = true;
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] != symbol) rowWin = false;
            if (board[j][i] != symbol) colWin = false;
        }
        if (rowWin || colWin) return true;
    }

    bool diagWin1 = true, diagWin2 = true;
    for (int i = 0; i < board.size(); i++) {
        if (board[i][i] != symbol) diagWin1 = false;
        if (board[i][board.size() - i - 1] != symbol) diagWin2 = false;
    }
    return diagWin1 || diagWin2;
}
