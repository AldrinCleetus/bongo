#pragma once

#include <SFML/Graphics.hpp>
#include "Player.h"
#include "test_object.h"
#include <vector>
#include "tile.h"

class Game
{
private:
	
	sf::RenderWindow* window;
	Player* player;

	std::vector<Tile*> tiles;
	

	sf::Clock deltaClock;
	sf::Time deltaTime;


public:
	Game();
	~Game();
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

