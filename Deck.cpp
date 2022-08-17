#include <algorithm>
#include <random>
#include <iostream>
#include "Deck.hpp"

Deck::Deck()
{
    std::vector<std::unique_ptr<Card>> temp;
    
    for (int i = 0; i < 4; i++)
	{
		temp.push_back(std::make_unique<Card>(i, 0));
		temp.push_back(std::make_unique<Card>(i, 1));
		temp.push_back(std::make_unique<Card>(i, 2));
		temp.push_back(std::make_unique<Card>(i, 3));
		temp.push_back(std::make_unique<Card>(i, 4));
		temp.push_back(std::make_unique<Card>(i, 5));
		temp.push_back(std::make_unique<Card>(i, 6));
		temp.push_back(std::make_unique<Card>(i, 7));
		temp.push_back(std::make_unique<Card>(i, 8));
		temp.push_back(std::make_unique<Card>(i, 9));
		temp.push_back(std::make_unique<Card>(i, 10));
		temp.push_back(std::make_unique<Card>(i, 11));
		temp.push_back(std::make_unique<Card>(i, 12));
	}
   
    for (int x = 0; x < cards_.max_size(); x++)
    {
        cards_[x] = std::move(temp[x]);
	}
   shuffleDeck();
}

void Deck::shuffleDeck()
{
    for (int i = 0; i < 100; i++)  // randmon position swap
	{
		std::random_device rd;
		std::mt19937 gen(rd()); 
		std::uniform_int_distribution<> distr(0, cards_.size() - 1);
		int p1 = distr(gen);
		int p2 = distr(gen);
		std::iter_swap(cards_.begin() + p1, cards_.begin() + p2);
	}
}

void Deck::printDeck()
{
	for (const auto& card : cards_)
	{
		std::cout << card->getColor() << " " << card->getFace() << std::endl;
	}

}

CartPtr Deck::getTopCard()
{
	return std::move(cards_.back());
}
