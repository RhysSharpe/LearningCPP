// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
    std::cout << "Hello World!\n";

#pragma region 1.2 Comments

    // https://www.learncpp.com/cpp-tutorial/comments/

    std::cout << "Hello world!\n"; // Everything from here to the end of the line is ignored

    std::cout << "Hello world!\n"; // std::cout lives in the iostream library
    std::cout << "It is very nice to meet you!\n"; // these comments make the code hard to read
    std::cout << "Yeah!\n"; // especially when lines are different lengths

    std::cout << "Hello world!\n";                 // std::cout lives in the iostream library
    std::cout << "It is very nice to meet you!\n"; // this is much easier to read
    std::cout << "Yeah!\n";                        // don't you think so?


    // std::cout lives in the iostream library
    std::cout << "Hello world!\n";

    // this is much easier to read
    std::cout << "It is very nice to meet you!\n";

    // don't you think so?
    std::cout << "Yeah!\n";


    /* This is a multi-line comment.
   This line will be ignored.
   So will this one. */

    /* This is a multi-line comment.
        * the matching asterisks to the left
        * can make this easier to read
        */

    //  /* This is a multi-line /* comment */ this is not inside the comment* /
    // The above comment ends at the first */, not the second */


    // Good comments for a give library, program or function should look like the following:

        // 1. Show what it is trying to accomplish without having to look at the actual code:

            // This program calculates the student's final grade based on his test and homework scores.

            // This function uses Newton's method to approximate the root of a given equation.

            // The following lines generate a random item based on rarity, level, and a weight factor.

        // 2. Used to describe *how* the code is going to accomplish its goal:
        
            /* To calculate the final grade, we sum all the weighted midterm and homework scores
                and then divide by the number of scores to assign a percentage, which is
                used to calculate a letter grade. */

            // To generate a random item, we're going to do the following:
            // 1) Put all of the items of the desired rarity on a list
            // 2) Calculate a probability for each item based on level and weight factor
            // 3) Choose a random number
            // 4) Figure out which item that random number corresponds to
            // 5) Return the appropriate item

        // 3. Statement level comments can be used to describe *why* the code is doing something:

            // Good Example
            // The player just drank a potion of blindness and can not see anything
            // sight = 0;

            // *Bad Example*
            // Set sight range to 0
            // sight = 0;


    // Commenting out code

        //    std::cout << 1;
        //    std::cout << 2;
        //    std::cout << 3;

        /*
            std::cout << 1;
            std::cout << 2;
            std::cout << 3;
        */

#pragma endregion

#pragma region 1.3 Introduction to Variables

    // https://www.learncpp.com/cpp-tutorial/introduction-to-variables/

    int x0; // define a variable named x0, of type int

    double width; // define a variable named width, of type double

    int a0, b0; // same as multiple line definitions, no need to add int keyword for any following declarations

    int a1; double b1; // correct (but not recommended) - should be split into separate lines

#pragma endregion

#pragma region 1.4 Variable assignment and initialization

    // Assignment

    int width0; // define an integer variable named width0
    width0 = 5; // copy assignment of value 5 into variable width0

    // variable width0 now has value 5
    // '=' is the assignment operator

    width0 = 7; // change value stored in variable width0 to 7

    // variable width0 now has value 7

    // Initialisation

    int width1 = 5; // *copy initialization* of value 5 into variable width1

    int width2(5); // *direct initialization* of value 5 into variable width2


    int width3{ 5 }; // direct brace initialization of value 5 into variable width3 (preferred)
    // empty braces means 0 but is used for temporary values

    int height0 = { 6 }; // copy brace initialization of value 6 into variable height

    // best practice to use direct brace initialization whenever possible

    int a2 = 5, b2 = 6; // copy initialization
    int c(7), d(8); // direct initialization
    int e{ 9 }, f{ 10 }; // brace initialization (preferred)

    int a3, b3 = 5; // wrong (a3 is not initialized!)

#pragma endregion

#pragma region 1.5 - Introduction to iostream

    // i/o library is included in the c++ standard library
    // #include <iostream> is used to access it

    std::cout << 4; // insertion operator (<<)

    int x1{ 5 }; // define integer variable x1, initialized with value 5
    std::cout << x1; // print value of x1 (5) to console

    // insertion operator (<<) can be used multiple times in a single statement to concatenate
    std::cout << std::endl <<  "Hello" << " world! X1 equals: " << x1 << '\n';

    // std::endl moves the cursor to the next line, and it �flushes� the output (makes sure that it shows up on the screen immediately)
    // std::cout, std::cout usually flushes output anyway, so it is more efficient to use '\n' instead of std:endl

    
    // std::cin is character input and uses the extraction operator (>>)

    std::cout << "Enter a number: "; // ask user for a number
    int input{ }; // define variable input to hold user input (and zero-initialize it)
    std::cin >> input; // get number from keyboard and store it in variable x
    std::cout << "You entered " << input << "!\n";

    // << is used with std::cout, and shows the direction that data is moving (the output data is moving from the variable to the console)
    // >> is used with std::cin, and shows the direction that data is moving (the input data is moving from the keyboard to the variable)

#pragma endregion

#pragma region 1.6 - Uninitialized variables and undefined behavior

    // C/C++ does not initialize most variables to a given value (such as zero) automatically

    /* when a variable is assigned a memory location by the compiler,
     *  the default value of that variable is whatever (garbage) value
     *  happens to already be in that memory location */

    /*
    * Initialization = The object is given a known value at the point of definition.
    * Assignment = The object is given a known value beyond the point of definition.
    * Uninitialized = The object has not been given a known value yet.
    */

    // define an integer variable named x
    int uninitialized; // this variable is uninitialized because we haven't given it a value

    doNothing(uninitialized); // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen
    std::cout << uninitialized; // who knows what we'll get, because x is uninitialized

    // This is the primary reason for the "always initialize your variables" best practice

#pragma endregion

#pragma region 1.7 - Keywords & Naming Identifiers

    // the name of a variable (or function, type, or other kind of item) is called an identifier

    // the identifier can only be composed of letters(lower or upper case), numbers, and the underscore character.
    // it must not start with a number
    // they are case sensitive and cannot be the same as a keyword (e.g. return)

    // Best practices:

        // start with a lowercase letter
        // functions should also start with a lowercase letter, like "main"
        // user-defined types (such as structs, classes, and enumerations) start with an uppercase letter

        // multi-word can be snake_case, or intercapped (camelCase)

        int my_variable_name; // correct (separated by underscores/snake_case)
        int my_function_name(); // correct (separated by underscores/snake_case)

        int myVariableName; // correct (intercapped/CamelCase)
        int myFunctionName(); // correct (intercapped/CamelCase)

        // avoid naming identifiers starting with an underscore, as these names are typically reserved for OS, library, and/or compiler use

        // identifiers should make clear what the value they are holding means

#pragma endregion

#pragma region 1.8 - Introduction to Literals & Operators

    // A literal (also known as a literal constant) is a fixed value that has been inserted directly into the source code

    // Hello world! and 5 are literals
    // std::cout << "Hello world!";
    // int x{ 5 };

    // literals and variables both have a value (and a type),
    // the value of a literal is fixed and cannot be changed (hence it being called a constant)
    // the value of a variable can be changed through initialization and assignment

    /* an operation is a mathematical calculation involving zero or more input values (called operands)
        * that produces a new value (called an output value).  The specific operation to be performed is
        * denoted by a construct (typically a symbol or pair of symbols) called an operator.*/

    // e.g. 2 + 3 equals 5. the literals 2 and 3 are the operands, and the symbol + is the operator

    // there are also a number of operators that are words (e.g. new, delete, and throw)

    // the number of operands that an operator takes as input is called the operator�s arity
    // operators in C++ come in three different arities:

        // Unary operators act on one operand. e.g. the - operator.
        // e.g. -5, operator- takes literal operand 5 and flips its sign to produce new output value -5

        // Binary operators act on two operands (known as left and right). e.g. + operator
        // e.g. 3 + 4, operator+ takes the left operand (3) and the right operand (4)
        // insertion (<<) and extraction (>>) operators are also binary operators

        // Ternary operators act on three operands. There is only one of these in C++.
        // (expression 1) ? expression 2 : expression 3

        // operators can have more than one meaning, such as the operator-


    // operators can be chained together - the output of one operator can be used as the input for another operator
    // e.g. 2 * 3 + 4 - multiplication first then addition

    // the order is the same as standard mathematics
    // Parenthesis first, then Exponents, then Multiplication & Division, then Addition & Subtraction.

#pragma endregion

#pragma region 1.9 - Introduction to expressions

    // Each of these statements defines a new variable and initializes it with a value:

    int xa{ 2 };             // initialize variable xa with value 2
    int ya{ 2 + 3 };         // initialize variable ya with value 5
    int za{ (2 * 3) + 4 };   // initialize variable za with value 10
    int wa{ ya };             // initialize variable wa with value 5 (the current value of variable ya)

    // An *expression* is a combination of literals, variables, operators, and explicit function calls (not shown above)
    // that produce a single output value.

    // When an expression is executed, each of the terms in the expression is evaluated until a single value remains
    // (this process is called *evaluation*). That single value is the *result* of the expression.

    // Expression examples:

        /*  2               // 2 is a literal that evaluates to value 2
            "Hello world!"  // "Hello world!" is a literal that evaluates to text "Hello world!"
            x               // x is a variable that evaluates to the value of x
            2 + 3           // 2 + 3 uses operator + to evaluate to value 5
            x = 2 + 3       // 2 + 3 evaluates to value 5, which is then assigned to variable x
            std::cout << x  // x evaluates to the value of x, which is then printed to the console
        */

    // Note that expressions do not end in a semicolon, and cannot be compiled by themselves
    // Rather, expressions are always evaluated as part of statements

    // type identifier { expression };
    int xb{ 2 + 3 }; // 2 + 3 is an expression that has no semicolon - the semicolon is at the end of the statement containing the expression

    // we can convert any expression into an equivalent statement (called an *expression statement*)
    // an expression statement is a statement that consists of an expression followed by a semicolon

    // Values calculated in an expression are discarded at the end of the expression

#pragma endregion

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
