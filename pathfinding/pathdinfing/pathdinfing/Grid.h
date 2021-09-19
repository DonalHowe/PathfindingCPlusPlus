#pragma once
#include "Cell.h"
#include "SFML/Graphics.hpp"
#include <vector>
#include "ScreenSize.h"
#include <iostream>
#include <list>
#include <queue>

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
	const static int START_POINT = 14;
	const static int END_POINT = 69;


	int findNeighbours(std::vector<Cell> &t_grid, int t_ID);
	
	std::queue<Cell> nodeQueue;
	std::queue<Cell> neigbQueue;


	bool m_endPoint = false;

	void bfs(const static int START_POINT, const static int END_POINT, std::vector<Cell>& t_grid);
	
};

