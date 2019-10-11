// Copyright (c) 2019 St. Mother Teresa HS All rights reserved

// Created by: Jaeyoon
// Created on: Oct 2019
// This program displays the month of the year

#include <iostream>


int main() {
    // this function displays the month of the year
    int month;

    // input
    std::cout << "Enter the month as number (1 ~ 12): ";
    std::cin >> month;

    // switch in C++ can not support strings, only numbers and char
    // also note you need the break in C++ or it will move to next
    // line in switch statement and might be true again
    switch (month) {
        // process & output
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << "Have no idea!" << std::endl;
    }
}
