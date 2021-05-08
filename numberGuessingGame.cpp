// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program is the better "Number Guessing Game"

#include <iostream>
#include <random>
#include <string>

main() {
    // this function runs the "Number Guessing Game"
    std::string stringGuessed;
    int numberGuessed;
    int randomNumber;

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> stringGuessed;

    // process
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);
    try {
        numberGuessed = std::stoi(stringGuessed);
        if (numberGuessed == randomNumber) {
        // output
            std::cout << "You guessed correctly!" << std::endl;
        } else {
        // output
            std::cout << "Incorrect, the number was " << randomNumber << std::endl;
        }
    }
    catch (std::invalid_argument) {
    // output
        std::cout << "\n" << stringGuessed
        << " is not a number at all!" << std::endl;
    }
    std::cout << "\n\nThanks for playing!"<< std::endl;
}
