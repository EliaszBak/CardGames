#include "olcPixelGameEngine.h"
	enum State
	{
		menu,
		single,
		multi,
		options
	};

class Menu : public olc::PixelGameEngine
{
public:
    Menu();
    bool OnUserUpdate(float fElapsedTime) override;
    bool OnUserCreate() override;

protected:


private:    
    State state_ = State::menu;
};