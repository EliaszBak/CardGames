#include "Menu.hpp"



int main()
{
	Menu demo;
	if (demo.Construct(256, 240, 4, 4))
		demo.Start();

	return 0;
}