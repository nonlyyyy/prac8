#ifndef SETTINGS_HPP
#define SETTINGS_HPP
#include <string>
struct Settings {
    int fieldSize = 3;
    std::string player1 = "Player 1";
    std::string player2 = "Player 2";
};
Settings loadSettings();
void saveSettings(const Settings& settings);
void settingsMenu(Settings& settings);
#endif
