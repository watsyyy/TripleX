// TripleX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

int main()
{
    //Declaring code variables
    const int codeA = 4;
    const int codeB = 3;
    const int codeC = 2;
    const int codeSum = codeA + codeB + codeC;
    const int codeProduct = codeA * codeB * codeC;

    //Declare game variables
    int playerGuesses;

    //Print starting message
    std::cout << "You are a secret agent breaking into a secure server room..." << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    //Print sum and product to the terminal
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add up to: " << codeSum << std::endl;
    std::cout << "The codes multiply to give: " << codeProduct << std::endl;

    return 0;
}
