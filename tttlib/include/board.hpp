#ifndef BOARD_HPP
#define BOARD_HPP
#include <vector>
void displayBoard(const std::vector<std::vector<char>>& board);
bool isWin(const std::vector<std::vector<char>>& board, char symbol);
bool isBoardFull(const std::vector<std::vector<char>>& board);
#endif
