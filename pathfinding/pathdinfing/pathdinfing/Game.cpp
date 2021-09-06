#include "Game.h"
static double const MS_PER_UPDATE = 10.0;

Game::Game() : m_window(sf::VideoMode(ScreenSize::m_width, ScreenSize::m_height, 32), "Pathfinding", sf::Style::Default)
{
	m_grid.setupGrid();
}

void Game::run()
{
	sf::Clock clock;
	sf::Int32 lag = 0;

	while (m_window.isOpen())
	{
		sf::Time dt = clock.restart();

		lag += dt.asMilliseconds();

		processEvents();

		while (lag > MS_PER_UPDATE)
		{
			update(lag);
			lag -= MS_PER_UPDATE;
		}
		update(lag);

		render(m_window);
	}
}

void Game::update(double dt)
{
}

void Game::render(sf::RenderWindow& t_window)
{
	m_window.clear(sf::Color(0, 0, 0, 0));
	m_grid.render(m_window);
	m_window.display();
}



void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
		processGameEvents(event);
	}
}

void Game::processGameEvents(sf::Event& event)
{
	// check if the event is a a mouse button release
	if (sf::Event::KeyPressed == event.type)
	{
		switch (event.key.code)
		{
		case sf::Keyboard::Escape:
			m_window.close();
			break;

		case sf::Keyboard::Space:


			break;

		default:
			break;
		}
	}
}
