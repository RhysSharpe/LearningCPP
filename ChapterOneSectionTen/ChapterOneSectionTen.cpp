#include "pch.h"
#include <iostream>

// My solution to the challenge (didn't need changes after following tutorial)
int main()
{
    std::cout << "Enter a number:\n";

    int input{ 0 };
    std::cin >> input;

    std::cout << "Your number is: " << input << '\n';
    std::cout << "Your number doubled is: " << input * 2 << '\n';
    std::cout << "Your number tripled is: " << input * 3 << '\n';
}
