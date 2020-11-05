#include <iostream>

int main()
{
    std::cout << "Welcome, Hacker.";
    std::cout << std::endl;
    std::cout << "ZeroCool needs your help!  It is up to you to enter the correct codes to save the tanker from a massive oil spill.  In order to stop this mayhem from ensuing, you must enter the correct codes to defeat The Plague.";
    std::cout << std::endl;

    const int CodeA = 3;
    const int CodeB = 9;
    const int CodeC = 27;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProd = CodeA * CodeB * CodeC;
    
    std::cout << std::endl;
    std::cout << "Here are some hints:" << std::endl;
    std::cout << "There are three numbers in the code." << std::endl;
    std::cout << "The codes add up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to: " << CodeProd << std::endl;

    int PlayerGuess;

    return 0;
}