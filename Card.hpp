#pragma once
#include <string>

class Card
{
public:
    Card(int color, int value);
    Card() = default;
    ~Card() = default;

    std::string getColor();
    std::string getFace();
    void setColor(int color);
    void setValue(int value);

private:
    std::string color_;
    std::string face_;
    int value_;

};

