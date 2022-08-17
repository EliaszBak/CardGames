#pragma once
#include <memory>
#include <vector>
#include "Card.hpp"

class Player
{
public:
    void getCard(std::unique_ptr<Card> card);
    void Fold();
    bool isFolded();
    void setCoins(const int amount);
    void minusCoins(const int amount);
    int getCoins();
private:
    std::vector<std::unique_ptr<Card>> cards_;
    bool fold_{false};
    int coins_;
};