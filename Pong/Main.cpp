#include "Game.hpp"
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 600), "Pong");

	Game game;
	game.Run(window);

	return 0;
}