#include "history.hpp"
#include <fstream>
#include <iostream>

const std::string HISTORY_FILE = "history.txt";

void saveGameResult(const std::string& player1, const std::string& player2, int fieldSize, const std::string& winner) {
    std::ofstream file(HISTORY_FILE, std::ios::app);
    if (file.is_open()) {
        file << player1 << " vs " << player2 << " | Field: " << fieldSize << "x" << fieldSize << " | Winner: " << winner << std::endl;
    } else {
        std::cout << "Unable to open history file for saving game result." << std::endl;
    }
    file.close();
}
