#include <iostream>
#include <fmt/base.h>
import DieRollMod;

int main() {
    fmt::println("Dice roll: {}", roll());
    std::cin.get();

    return 0;
}