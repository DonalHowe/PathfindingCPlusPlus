#pragma once
#include "SFML/Graphics.hpp"
#include "Grid.h"
#include "ScreenSize.h"
class Game
{
public:
	Game();
	void run();
protected:
	void update(double dt);
	Grid m_grid;
	void render(sf::RenderWindow &t_window);

	sf::RenderWindow m_window;
	void processEvents();




	void processGameEvents(sf::Event&);

};

