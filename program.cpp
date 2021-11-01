/// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
/// This program is game

#include <iostream>

int main() {
    // this is game
    const int SECRET_NUMBER = 5;
    int number;

    // input
    std::cout << "Enter the number between 0-9: ";
    std::cin >> number;

    // process
    if (number == SECRET_NUMBER) {
        // output
        std::cout << "You guessed correct!";
    }
    if (number != SECRET_NUMBER) {
        // output
        std::cout << "You guessed wrong!";
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
