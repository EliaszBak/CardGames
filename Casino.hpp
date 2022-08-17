#pragma once
#include <memory>
#include <vector>
#include "Player.hpp"
#include "Deck.hpp"


class Casino
{
public:
    Casino();
    ~Casino() = default;

    void startGame(const int noOfPlayers);

private:
    std::vector<Player> players_;
    std::unique_ptr<Deck> deck_;
};