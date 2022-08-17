#pragma once
#include <vector>
#include <array>
#include <memory>

#include "Card.hpp"

using CartPtr = std::unique_ptr<Card>;

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
    void printDeck();

    CartPtr getTopCard();

private:
    std::array<CartPtr, DECKSIZE> cards_;

};