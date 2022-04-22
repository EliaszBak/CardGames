#pragma once
#include <memory>
#include <vector>
#include "Player.hpp"

class Deck;

class Casino
{
public:
    Casino();
    ~Casino() = default;
private:
    std::vector<Player> players;
};