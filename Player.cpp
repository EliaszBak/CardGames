#include "Player.hpp"


void Player::getCard(std::unique_ptr<Card> card)
{
    cards_.push_back(std::move(card));
}

void Player::Fold()
{
    fold_ = true;
}

bool Player::isFolded()
{
    return fold_;
}

