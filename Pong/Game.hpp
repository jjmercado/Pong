#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Puck.hpp"

class Game
{
	public:
		Game();
		~Game();
		void Run(sf::RenderWindow& window);

	private:
		void ProcessEvents(sf::RenderWindow& window);
		void Update(sf::Time deltaTime);
		void Render(sf::RenderWindow& window);
		sf::Texture backgroundTexture;
		sf::Sprite backgroundSprite;
		sf::Clock fpsClock;
		unsigned int frameCount;
		Puck puck;
};

