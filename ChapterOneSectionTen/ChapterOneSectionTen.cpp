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

    //

    std::cout << "\n";

    // Quiz task

    int first{ 0 };
    int second{ 0 };

    std::cout << "Enter a number:\n";
    std::cin >> first;

    std::cout << "\nEnter another number:\n";
    std::cin >> second;

    std::cout << first << " + " << second << " is " << first + second << ".\n";
    std::cout << first << " - " << second << " is " << first - second << ".\n";
}


// Chapter 1 Quiz

// What is the difference between initialization and assignment?
// Assignment is giving a value to an already existing variable whereas initialization is assigning it on creation.

// When does undefined behaviour occur? What are the consequences of undefined behaviour?
// It occurs when the programmer does something unclear, such as defining a variable without a value (can have garbage from memory as the value).
// Undefined behaviour can lead to bugs and crashes, or the programming not working as expected.

// Write a program that asks the user to enter a number, and then enter a second number.
// The program should tell the user what the result of adding and subtracting the two numbers are.
//
// The output of the program should match the following(assuming inputs of 6 and 4) :
//
//    Enter an integer : 6
//    Enter another integer : 4
//    6 + 4 is 10.
//    6 - 4 is 2.
