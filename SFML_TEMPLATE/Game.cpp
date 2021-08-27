#include "Game.h"

Game::Game()
	:renderWindow(sf::VideoMode(400, 400), "SFML !")
{

}
Game::~Game()
{
}
void Game::run()
{
	while (renderWindow.isOpen())
	{
		processEvents();
		update();
		render();
	}
}

void Game::processEvents()
{
	sf::Event event;
	while (renderWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			renderWindow.close();
		}
	}
}
void Game::update()
{
}
void Game::render()
{
	renderWindow.clear();
	renderWindow.display();
}