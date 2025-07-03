#include "settings.hpp"
#include <fstream>
#include <iostream>

const std::string SETTINGS_FILE = "settings.txt";

Settings loadSettings() {
    Settings settings;
    std::ifstream file(SETTINGS_FILE);
    if (file.is_open()) {
        file >> settings.fieldSize;
        file.ignore();
        std::getline(file, settings.player1);
        std::getline(file, settings.player2);
    } else {
        std::cout << "Unable to open settings file. Using default settings." << std::endl;
    }
    file.close();
    return settings;
}
