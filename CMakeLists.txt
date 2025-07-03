cmake_minimum_required(VERSION 3.10)
project(TicTacToe)

# Включаем опцию для выбора типа библиотеки
option(BUILD_SHARED_LIBS "Build shared libraries instead of static" OFF)

# Добавление поддиректории библиотеки
add_subdirectory(tttlib)

# Главный исполняемый файл
add_executable(tictactoe src/main.cpp)
target_include_directories(tictactoe PRIVATE tttlib/include)
target_link_libraries(tictactoe PRIVATE tttlib)