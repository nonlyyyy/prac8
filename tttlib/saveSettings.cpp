#include "settings.hpp"
#include <fstream>
#include <iostream>

const std::string SETTINGS_FILE = "settings.txt";

void saveSettings(const Settings& settings) {
    std::ofstream file(SETTINGS_FILE);
    if (file.is_open()) {
        file << settings.fieldSize << std::endl;
        file << settings.player1 << std::endl;
        file << settings.player2 << std::endl;
    } else {
        std::cout << "Unable to open settings file for saving." << std::endl;
    }
    file.close();
}
