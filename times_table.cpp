// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// This program shows the user input multiplied by all the numbers including
//   and leading up to 10

#include <iostream>
#include <string>

int main() {
    // this program squares all the numbers leadiong up to and including the
    // inputted number.
    int counter = 0;
    int answer = 0;
    std::string user_string;
    int user_input;

    // input
    std::cout << "" << std::endl;
    std::cout << "Enter a positive integer: ";
    std::cin >> user_string;
    std::cout << "" << std::endl;

    // process
    try {
        user_input = std::stoi(user_string);
        if (user_string.find_first_of(".") != std::string::npos) {
            std::cout << "Invalid input" <<std:: endl;
        } else {
            if (user_input >= 0) {
                for (counter = 0; counter <= 10; counter++) {
                    answer = counter * user_input;
                    std::cout << user_input << " x " << counter
                        << " = " << answer << std::endl;
                }
            } else {
                std::cout << "please enter a positive number." << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
