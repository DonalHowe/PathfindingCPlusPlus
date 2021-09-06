#include "Grid.h"

void Grid::setupGrid()
{
    m_cell.setupCell();
    findNeighbours(STARTID);
   
    sf::Vector2f newPos{ 0,0 };
    for (int i = 0; i < 155; i++)
    {

        m_cell.setID();

      
        m_grid.push_back(m_cell);

        newPos.x += m_grid.at(i).m_width;

       // std::cout << "x : " << newPos.x << " , " <<" y :" <<newPos.y << std::endl;

        if (newPos.x >600)
        {
            newPos.y += m_grid.at(i).m_height;
            newPos.x = 0;
            int i = 0;
        }
       
     
        m_grid.at(i).m_rect.setPosition( newPos);
    }
    m_grid.at(STARTID).m_rect.setFillColor(sf::Color::Blue);
 /*   int calcRow = m_grid.at(m_grid.size() - 1) / 10;
    int calcCol = m_grid.at(m_grid.size() - 1) % 10;*/
    m_grid.size();
    int i = 0;
}

void Grid::render(sf::RenderWindow& t_window)
{
    for (int i = 0; i < 155; i++)
    {
        t_window.draw(m_grid.at(i).m_rect);
    }
}

Grid::Grid()
{
}




 int Grid::findNeighbours(int t_ID)
{
	
	// Let's see if we can find the neighbours of row 4 and column 4:
	int row = t_ID; // the array in grid array
    int col = t_ID; // this is the object in the secons array inside of grid array
	
	
	// List all neighbors:
	for (int direction = 0; direction < 9; direction++) {
		if (direction == 4) continue; // Skip 4, this is ourself.

		int n_row = row + ((direction % 3) - 1); // Neighbor row
		int n_col = col + ((direction / 3) - 1); // Neighbor column
        int p = 13;
		// Check the bounds:
		if (n_row >= 0 && n_row < m_MAX_ROWS && n_col >= 0 && n_col < M_MAX_COLUMNS) {

			// A valid neighbor:
			std::cout << "Neighbor: " << n_row << "," << n_col << ": "  << std::endl;
		//	m_tempList.push_back(std::make_pair(n_row, n_col));
		}
		
	}
	
	
	return 10;

}