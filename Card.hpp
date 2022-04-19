#pragma once

class Card
{
public:
    Card(int color, int value);
    Card() = default;
    ~Card() = default;
    string getColour;
    string getFace;

private:
    string color;
    string face;
    int value;

};