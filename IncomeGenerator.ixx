//
// Created by jc on 13/09/2025.
//
module;

#include <iostream>
#include <ostream>
#include <chrono>
import DieRollMod;
#include <thread>

export module IncomeGeneratorMod;
float generateIncome(const int diceNumber) {
    switch (diceNumber) {
        case 1:
            return 0;
        case 2:
            return 0.5;
        case 3:
            return 1.99;
        case 4:
            return 5.99;
        case 5:
            return 25.99;
        case 6:
            return 100.99;
        default: return 0;
    }
}


void printIncome(const float income) {
    std::cout << income << std::endl;
}

void rollIncome() {
    using namespace std::chrono;

    while (true) {
        auto start = steady_clock::now();
        generateIncome(roll());

        std::this_thread::sleep_for(start + minutes(20));
    }
}