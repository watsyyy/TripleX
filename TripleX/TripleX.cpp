// TripleX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    //Print starting message
    std::cout << "You are a secret agent breaking into a secure server room... with a level difficulty of : " << Difficulty << std::endl;
    std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty) 
{
    PrintIntroduction(Difficulty);

    //Declaring code variables
    const int codeA = rand() % Difficulty + Difficulty;
    const int codeB = rand() % Difficulty + Difficulty;
    const int codeC = rand() % Difficulty + Difficulty;
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

    //Win-lose message
    if (GuessSum == codeSum && GuessProduct == codeProduct)
    {
        std::cout << "You Win! Increasing the level difficulty.\n";
        return true;
    }
    else
    {
        std::cout << "Sorry, the numbers did not crack the code. Try Again!\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); //create new random sequence based on time.
    const int MaxDifficulty = 5;
    int LevelDifficulty = 1;

    while (LevelDifficulty <= MaxDifficulty) // Loop until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    std::cout << "Congragulations, you cracked the code! Game Over.\n";

    return 0;
}
