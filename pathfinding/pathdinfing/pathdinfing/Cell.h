#pragma once
#include "SFML/Graphics.hpp"
class Cell
{
	
	
public:
	Cell();
	void setupCell();
	void setID();

	sf::Vector2f m_position{ 0,0 };
	sf::RectangleShape m_rect;
	const static int m_width = 50;
	const static int m_height = 50;
	int id = 0;
	std::vector<int > neighboursIDS;
	void addNeighbour(int t_ID);
};

