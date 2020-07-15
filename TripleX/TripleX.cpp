// TripleX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

void PrintIntroduction(int LevelDifficulty)
{
    //Print starting message
    std::cout << "You are a secret agent breaking into a secure server room... with a level difficulty of : " << LevelDifficulty << std::endl;
    std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame(int LevelDifficulty) 
{
    PrintIntroduction(LevelDifficulty);

    //Declaring code variables
    const int codeA = 4;
    const int codeB = 3;
    const int codeC = 2;
    const int codeSum = codeA + codeB + codeC;
    const int codeProduct = codeA * codeB * codeC;

    //Print sum and product to the terminal
    std::cout << "There are 3 numbers in the code\n";
    std::cout << "The codes add up to: " << codeSum << std::endl;
    std::cout << "The codes multiply to give: " << codeProduct << std::endl;

    //Declare game variables
    int GuessA;
    int GuessB;
    int GuessC;

    std::cout << "Please enter your three guesses: \n";
    std::cin >> GuessA >> GuessB >> GuessC;

    //Initilising guess sum and product
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Win/lose message
    if (GuessSum == codeSum && GuessProduct == codeProduct)
    {
        std::cout << "Congragulations, you cracked the code!!!\n";
        return true;
    }
    else
    {
        std::cout << "Sorry, the numbers did not crack the code.\n";
        return false;
    }
}

int main()
{

    int LevelDifficulty = 1;

    while (true) 
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    return 0;
}
