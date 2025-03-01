// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created Feb 2025
// This program calculates the circumference;

#include <iostream>

int main() {
    // Creates constant TAU and variable radius
    const float TAU = 6.28;
    float radius;

    // asks for user input to asign a value for variable radius
    std::cout << "what is the radius of your circle?:";
    std::cin >> radius;
    std::cout << "" << std::endl;

    // calculates the circumference 
    std::cout << "Circumference = " << (TAU * radius) << std::endl;
}
