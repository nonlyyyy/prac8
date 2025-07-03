#include "game.hpp"
#include "board.hpp"
#include "history.hpp"
#include "menu.hpp"
#include <iostream>
#include <vector>

void playGame(const Settings& settings) {
    std::cout << "Who will play first?" << std::endl;
    std::cout << "1. " << settings.player1 << std::endl;
    std::cout << "2. " << settings.player2 << std::endl;
    int firstPlayerChoice;
    std::cin >> firstPlayerChoice;

    std::string currentPlayer = (firstPlayerChoice == 1) ? settings.player1 : settings.player2;
    char currentSymbol = 'X';
    std::string opponent = (firstPlayerChoice == 1) ? settings.player2 : settings.player1;
    char opponentSymbol = 'O';

    std::vector<std::vector<char>> board(settings.fieldSize, std::vector<char>(settings.fieldSize, '.'));

    while (true) {
        displayBoard(board);
        int row, col;
        std::cout << currentPlayer << "'s turn (" << currentSymbol << "). Enter row and column (0-based): ";
        std::cin >> row >> col;

        if (row >= 0 && row < settings.fieldSize && col >= 0 && col < settings.fieldSize && board[row][col] == '.') {
            board[row][col] = currentSymbol;

            if (isWin(board, currentSymbol)) {
                displayBoard(board);
                std::cout << currentPlayer << " wins!" << std::endl;
                saveGameResult(settings.player1, settings.player2, settings.fieldSize, currentPlayer);
                afterGameMenu();
                break;
            }

            if (isBoardFull(board)) {
                displayBoard(board);
                std::cout << "It's a draw!" << std::endl;
                saveGameResult(settings.player1, settings.player2, settings.fieldSize, "Draw");
                afterGameMenu();
                break;
            }

            std::swap(currentPlayer, opponent);
            std::swap(currentSymbol, opponentSymbol);
        } else {
            std::cout << "Invalid move, try again." << std::endl;
        }
    }
}