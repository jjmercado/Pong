#include "Paddle.hpp"

Paddle::Paddle(sf::IntRect selectPaddle, sf::Vector2f setPosition)
{
	if (paddleTexture.loadFromFile("..\\sprites.png", selectPaddle));
	{
		paddleSprite.setTexture(paddleTexture);
		paddleSprite.setOrigin(paddleSprite.getGlobalBounds().width / 2, paddleSprite.getGlobalBounds().height / 2);
		paddleSprite.setPosition(setPosition);
	}
}

Paddle::~Paddle()
{
}

void Paddle::Render(sf::RenderWindow& window)
{
	window.draw(paddleSprite);
}
