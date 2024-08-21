#pragma once
#include <SFML/Graphics.hpp>

class Paddle
{
	public:
		Paddle(sf::IntRect selectPaddle, sf::Vector2f setPosition);
		~Paddle();
		void Render(sf::RenderWindow& window);

	private:
		sf::Texture paddleTexture;
		sf::Sprite paddleSprite;
};

