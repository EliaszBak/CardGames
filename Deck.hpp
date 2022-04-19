#pragma once
#include <vector>
#include "Card.hpp"

class Deck
{
public:
    Deck();
    ~Deck() = default;
private:
    std::vector<Card> cards_;

};