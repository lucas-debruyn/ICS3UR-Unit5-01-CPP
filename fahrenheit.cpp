// Copyright (c) 2022 Lucas DeBruyn All rights reserved

// Created by: Lucas DeBruyn
// Created on: December 2022
// This program converts Celsius to Fahrenheit

#include <iostream>

void CelsiusToFahrenheit() {
    // This function converts Celsius to Fahrenheit

    float Tc;
    float Tf;
    std::string Celsius;

    // Input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> Celsius;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        Tc = std::stoi(Celsius);
        Tf = 1.8 * Tc + 32;
        std::cout << Tc << "°C is equal to " << Tf << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input." << std::endl;
    }
}

int main() {
    // This function calls functions

    CelsiusToFahrenheit();

    std::cout << "\nDone." << std::endl;
}
