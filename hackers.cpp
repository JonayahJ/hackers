#include <iostream>

// void means the fx will return no data
void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nWelcome, Hacker. ZeroCool needs your help!  \nIt is up to you to enter the correct codes to save the tanker from a massive oil spill.  Right now, you're hacking into a Level " << Difficulty;
    std::cout << " Terminal.  \nIn order to stop this mayhem from ensuing, you must enter the correct codes to defeat The Plague.  Make it all the way to Level 5, and you will have saved the day!\n\n";
}

bool PlayGame(int Difficulty)
{
    // Call my fx
    PrintIntroduction(Difficulty);
    
    // Code Variables
    const int CodeA = rand();
    const int CodeB = rand();
    const int CodeC = rand();

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProd = CodeA * CodeB * CodeC;
    
    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "Here are some hints: \n+ There are three numbers in the code. \n+ The codes add up to: " << CodeSum <<std::endl;
    std::cout << "+ The codes multiply to: " << CodeProd << std::endl;

    int GuessA, GuessB, GuessC;

    // Store player guess
    std::cout << "\n\nNow it's time for you to start entering codes.  Remember to only enter numbers. \n\nEnter the code for the first number: "; 
    std::cin >> GuessA;
    std::cout << "Enter the code for the second number: "; 
    std::cin >> GuessB;
    std::cout << "Enter the code for the third number: "; 
    std::cin >> GuessC;
    std::cout << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProd = GuessA * GuessB * GuessC;

    // Check if guess is correct
    if(GuessSum == CodeSum && GuessProd == CodeProd)
    {
        std::cout << "\n Good job, Hacker.  You stopped the command.  Keep going!\n";
        return true;
    }
    else
    {
        std::cout << "\nBad smarts.  The Plague executed his command.  Try again.\n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    // When all levels are completed, the game will exit
    std::cout << "\nHack the planet!  You saved the tanker and stopped the oil spill!  Good job, Hacker.  Now get out of there!\n";
    return 0;
}