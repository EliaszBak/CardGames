#include <algorithm>
#include <random>

#include "Deck.hpp"

Deck::Deck()
{
    std::vector<Card> temp;
    
    for (int i = 0; i < 4; i++)
	{
		temp.push_back(Card(i, 0));
		temp.push_back(Card(i, 1));
		temp.push_back(Card(i, 2));
		temp.push_back(Card(i, 3));
		temp.push_back(Card(i, 4));
		temp.push_back(Card(i, 5));
		temp.push_back(Card(i, 6));
		temp.push_back(Card(i, 7));
		temp.push_back(Card(i, 8));
		temp.push_back(Card(i, 9));
		temp.push_back(Card(i, 10));
		temp.push_back(Card(i, 11));
		temp.push_back(Card(i, 12));
	}
    for (int x = 0; x < cards_.max_size(); x++)
    {
        cards_[x] = temp[x];
	}
   shuffleDeck();
}

void Deck::shuffleDeck()
{
    for (int i = 0; i < 100; i++)
	{
		std::random_device rd;
		std::mt19937 gen(rd()); 
		std::uniform_int_distribution<> distr(0, cards_.size() - 1);
		int p1 = distr(gen);
		int p2 = distr(gen);
		std::iter_swap(cards_.begin() + p1, cards_.begin() + p2);
	}
}
