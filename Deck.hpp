#pragma once
#include <vector>
#include "Card.hpp"
#include <array>

namespace
{
    constexpr std::size_t DECKSIZE = 52;
}

class Deck
{
public:
    Deck();
    ~Deck() = default;

    void shuffleDeck();
private:
    std::array<Card, DECKSIZE> cards_;

};