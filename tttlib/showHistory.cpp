#include "history.hpp"
#include <fstream>
#include <iostream>

const std::string HISTORY_FILE = "history.txt";

void showHistory() {
    std::ifstream file(HISTORY_FILE);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    } else {
        std::cout << "Game history is empty." << std::endl;
    }
    file.close();
}
