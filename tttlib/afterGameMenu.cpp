#include "menu.hpp"
#include <iostream>

void afterGameMenu() {
    while (true) {
        std::cout << "What would you like to do next?" << std::endl;
        std::cout << "1. Start a new game" << std::endl;
        std::cout << "2. Return to main menu" << std::endl;
        std::cout << "Your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
            case 2:
                return;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    }
}
