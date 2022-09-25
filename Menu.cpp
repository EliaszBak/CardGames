#define OLC_PGE_APPLICATION


#include "Menu.hpp"
Menu::Menu()
{
    sAppName = "Collection of Card Games";
}

bool Menu::OnUserCreate()
{

	return true;
}

bool Menu::OnUserUpdate(float fElapsedTime)
{   

	switch(state_)
	{
		case State::menu:
		{
			Clear(olc::Pixel(255,255,255));
			DrawCircle(GetMousePos(), 2);
			break;
		}
		case State::single:
		{
			Clear(olc::Pixel(0,0,0));
			break;
		}
		case State::multi:
		{
			Clear(olc::Pixel(10,23,44));
		}
		case State::options:
		{
			Clear(olc::Pixel(100,233,44));
		}
	}
	return true;

}