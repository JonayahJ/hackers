#include <iostream>

int main()
{
    std::cout << "Welcome, Hacker. ZeroCool needs your help!  \nIt is up to you to enter the correct codes to save the tanker from a massive oil spill.  \nIn order to stop this mayhem from ensuing, you must enter the correct codes to defeat The Plague." << std::endl;

    const int CodeA = 1;
    const int CodeB = 3;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProd = CodeA * CodeB * CodeC;
    
    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "Here are some hints: \nThere are three numbers in the code. \nThe codes add up to: " << CodeSum <<std::endl;
    std::cout << "The codes multiply to: " << CodeProd << std::endl;

    int GuessA, GuessB, GuessC;

    // Store player guess
    std::cout << "Now it's time for you to start entering codes.  Remember to only enter numbers. \nEnter the code for the first number: "; 
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
        std::cout << "Hack the planet!  You saved the tanker!  Good job, Hacker.";
    }
    else
    {
        std::cout << "Bad smarts.  The tanker sank and the oil refinery has been destroyed.  Better luck next time.";
    }
    

    return 0;
}