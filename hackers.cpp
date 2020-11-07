#include <iostream>

// void means the fx will return no data
void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nWelcome, Hacker. ZeroCool needs your help!  \nIt is up to you to enter the correct codes to save the tanker from a massive oil spill.  Right now, you're hacking into a Level " << Difficulty;
    std::cout << " Terminal.  \nIn order to stop this mayhem from ensuing, you must enter the correct codes to defeat The Plague.  Make it all the way to Level 10, and you will have saved the day!\n\n";
}

bool PlayGame(int Difficulty)
{
    // Call my fx
    PrintIntroduction(Difficulty);
    
    // Code Variables
    const int CodeA = 1;
    const int CodeB = 3;
    const int CodeC = 5;

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
        std::cout << "\nHack the planet!  You saved the tanker!  Good job, Hacker.\n";
        return true;
    }
    else
    {
        std::cout << "\nBad smarts.  The tanker sank and the oil refinery has been destroyed.  Better luck next time.\n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;

    while(true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); 
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    
    return 0;
}