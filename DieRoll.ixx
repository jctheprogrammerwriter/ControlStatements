//
// Created by jc on 13/09/2025.
//
module;

#include <iostream>
#include <random>
#include <fmt/base.h>

export module DieRollMod;

export int roll() {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> dis(1, 6);


    return dis(gen);
}
