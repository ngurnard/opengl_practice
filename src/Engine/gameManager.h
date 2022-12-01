#pragma once

#include "displayManager.h"

class GameManager
{
public:
    // Constructors/Destructors
	GameManager();
	virtual ~GameManager();

	void startGame(); // this is the main game loop function

private:
	DisplayManager* m_displayManager;
};
