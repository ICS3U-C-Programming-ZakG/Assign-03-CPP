// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Nov. 4, 2023
// This program gets a number from the user
// and tells them what air quality it is.

#include <iostream>
#include <string>

int main() {

    // introduce program to user
    std::cout << "This program gets a number from the user ";
    std::cout << "and tells them what air quality it is.\n" << std::endl;

    // declare variables
    float airQualityFloat;
    int airQualityInt;
    std::string airQualityStr;

    // get user input
    std::cout << "Please enter a number from 0-500: ";
    std::cin >> airQualityStr;

    // try converting string input to integer
    try {
        airQualityInt = std::stoi(airQualityStr);

        // cast user input string to a float
        airQualityFloat = std::stof(airQualityStr);

        // check if input is a decimal
        if (airQualityInt != airQualityFloat) {

            // tell user they cannot enter a decimal
            std::cout << "" << airQualityFloat << " is not a valid input.\n";

            // check if user input is within the index range
        } else if (airQualityInt < 0 || airQualityInt > 500) {

                // tell user the number is not within the range of the index
                std::cout << "" << airQualityInt << " is not a number ";
                std::cout << " within the range of the index.\n";

                // check if number is between 0-50
            } else if (airQualityInt >= 0 && airQualityInt <= 50) {
                std::cout << "" << airQualityInt;
                std::cout << " is a good air quality, it ranges from 0-50!\n";

                // check if number is between 51-100
                } else if (airQualityInt >= 51 && airQualityInt <= 100) {
                    std::cout << "" << airQualityInt << " is a moderate air ";
                    std::cout << "quality, it ranges from 51-100!\n";

                    // check if number is between 101-150
                } else if (airQualityInt >= 101 && airQualityInt <= 150) {
                    std::cout << "" << airQualityInt << " is an ";
                    std::cout << "unhealthy for sensitive people air ";
                    std::cout << "quality, it ranges from 101-150!\n";

                    // check if number is between 151-200
                } else if (airQualityInt >= 151 && airQualityInt <= 200) {
                    std::cout << "" << airQualityInt << " is an unhealthy";
                    std::cout << " air quality, it ranges from 151-200!\n";

                    // check if number is between 201-300
                } else if (airQualityInt >= 201 && airQualityInt <= 300) {
                    std::cout << "" << airQualityInt << " is a very unhealthy";
                    std::cout << " air quality, it ranges from 201-300!\n";

                    // check if number is between 301-500
                } else if (airQualityInt >= 301 && airQualityInt <= 500) {
                    std::cout << "" << airQualityInt << " is a hazardous air";
                    std::cout << " quality, it ranges from 301-500!\n";
                }
            // catch invalid inputs
    } catch (std::invalid_argument) {
        std::cout << "" << airQualityStr << " is not a number in the index.\n";
    }
}
