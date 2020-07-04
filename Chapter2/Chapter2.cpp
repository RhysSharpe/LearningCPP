#include "pch.h"
#include <iostream>

// Definition of user-defined function doPrint()
void doPrint() // doPrint() is the called function in this example
{
    std::cout << "In doPrint()\n";
}

void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "Starting doA()\n";
    doB();
    std::cout << "Ending doA()\n";
}

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)
int returnFive()
{
    // the return statement indicates the specific value that will be returned
    return 5; // return the specific value 5 back to the caller
}

// Function asks user to enter a value
// Return value is the integer entered by the user from the keyboard
int getValueFromUser() // this function now returns an integer value
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input; // return the value the user entered back to the caller
}

/*
    In C++, functions cannot be defined inside other functions - nested functions are not allowed.

    int return7()
    {
        return 7;

        int return9()
        {
            return 9;
        }
    }
*/

// Definition of function main()
int main()
{
    std::cout << "Starting main()\n";

    doPrint(); // Interrupt main() by making a function call to doPrint().  main() is the caller.
    doPrint(); // doPrint() called for the second time

    std::cout << "Ending main()\n\n"; // this statement is executed after doPrint() ends

    doA();

    std::cout << '\n' << returnFive() << '\n'; // prints 5
    std::cout << returnFive() + 3 << '\n'; // prints 8

    int num{ getValueFromUser() }; // initialize num with the return value of getValueFromUser()
    std::cout << num << " doubled is: " << num * 2 << '\n';


    int x{ getValueFromUser() }; // first call to getValueFromUser
    int y{ getValueFromUser() }; // second call to getValueFromUser

    std::cout << x << " + " << y << " = " << x + y << '\n';

    // Your main function should return 0 (EXIT_SUCCESS) if the program ran normally.
    return EXIT_SUCCESS;
}