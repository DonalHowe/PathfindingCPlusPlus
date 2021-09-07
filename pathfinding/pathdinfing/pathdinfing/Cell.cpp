#include "Cell.h"

Cell::Cell()
{
 
}

void Cell::setupCell()
{
    m_rect.setSize(sf::Vector2f{ m_width,m_height });
    m_rect.setPosition(m_position);
    m_rect.setFillColor(sf::Color::Transparent);
    m_rect.setOutlineColor(sf::Color::Red);
    m_rect.setOutlineThickness(2u);
}

void Cell::setID()
{
    id += 1;
}

void Cell::addNeighbour(int t_ID)
{
    neighboursIDS.push_back(t_ID);
}

