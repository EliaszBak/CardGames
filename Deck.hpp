#pragma once
#include <vector>
#include <array>
#include <memory>

#include "Card.hpp"

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
    std::array<std::unique_ptr<Card>, DECKSIZE> cards_;

};