#include <iostream>


#include "Casino.hpp"


Casino::Casino() : deck_{std::make_unique<Deck>()}
{
    std::cout << " Casino()" << std::endl;
}

void Casino::startGame(const int noOfPlayers)
{
    
}

