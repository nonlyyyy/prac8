#include "menu.hpp"
#include "settings.hpp"
#include "history.hpp"
#include "game.hpp"
#include <iostream>

void mainMenu() {
    Settings settings = loadSettings();
    while (true) {
        std::cout << "=== Tic-Tac-Toe ===" << std::endl;
        std::cout << "1. Start New Game" << std::endl;
        std::cout << "2. Settings" << std::endl;
        std::cout << "3. Game History" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                playGame(settings);
                break;
            case 2:
                settingsMenu(settings);
                break;
            case 3:
                showHistory();
                break;
            case 4:
                std::cout << "Exiting program." << std::endl;
                return;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }

        std::cout << std::endl;
    }
}
