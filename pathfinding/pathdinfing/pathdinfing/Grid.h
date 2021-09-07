#pragma once
#include "Cell.h"
#include "SFML/Graphics.hpp"
#include <vector>
#include "ScreenSize.h"
#include <iostream>
#include <list>
class Grid
{
	Cell m_cell;
	std::vector<Cell> m_grid;
	
public:
	Grid();
	//const static int STARTID = 5;
	
	void setupGrid();
	void render(sf::RenderWindow& t_window);
	const static int   m_MAX_ROWS = 12;
	const static int M_MAX_COLUMNS = 12;
	
	int findNeighbours(std::vector<Cell> &t_grid, int t_ID);
	
	
};

