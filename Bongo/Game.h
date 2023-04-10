#pragma once

#include <SFML/Graphics.hpp>
#include "Player.h"

class Game
{
private:
	
	sf::RenderWindow* window;
	Player* player;


public:
	Game();
	void run();

private:

	// Game window and inputs
	void init();
	void update();
	void render();
	void handleWindowEvents();
	void handleInput();
	void handleGameState();

	// Player
	void loadPlayer();
	
};

