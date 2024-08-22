#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Puck.hpp"
#include "Paddle.hpp"
#include "Score.hpp"

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
		Score score;
		Paddle paddle1;
		Paddle paddle2;
		float pi = 3.14159274;
};

