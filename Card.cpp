#include "Card.hpp"


const std::string colors[] = {"spades", "hearts", "clubs", "diamonds" };
const char faces[] = { '2', '3', '4', '5', '6', '7', '8', '9', 'D', 'J', 'Q', 'K', 'A' };
// every card have value, it will be usefull in some games f.e. blackjack
const int values[] = { 2,   3,   4,   5,   6,   7 ,  8,   9,  10,   2,   3,   4,  11 };

Card::Card(int color, int value)
{
    setColor(color);
    setValue(value);  
}

void Card::setColor(int color) {
    if (color < 4) {
        color_ = colors[color];
    }
}

void Card::setValue(int value) {
    if (value < 13) {
        face_ = faces[value];
        value_ = values[value];
    }
}

std::string Card::getColor()
{
    return color_;
}

std::string Card::getFace()
{
    return face_;
}