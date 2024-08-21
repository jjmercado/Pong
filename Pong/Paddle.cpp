#include "Paddle.hpp"

Paddle::Paddle(sf::IntRect selectPaddle, sf::Vector2f setPosition)
{
	if (paddleTexture.loadFromFile("..\\sprites.png", selectPaddle));
	{
		paddleSprite.setTexture(paddleTexture);
		paddleSprite.setOrigin(paddleSprite.getGlobalBounds().width / 2, paddleSprite.getGlobalBounds().height / 2);
		paddleSprite.setPosition(setPosition);
	}

	speed = 100;
}

Paddle::~Paddle()
{
}

void Paddle::Event(sf::Event event, sf::Keyboard::Key keyUp, sf::Keyboard::Key keyDown)
{
	if (event.type == sf::Event::KeyPressed)
	{
		if (sf::Keyboard::isKeyPressed(keyUp))
		{
			direction = sf::Vector2f(0, -1);
		}
		if (sf::Keyboard::isKeyPressed(keyDown))
		{
			direction = sf::Vector2f(0, 1);
		}
	}
	else if (event.type == sf::Event::KeyReleased)
	{
		if (event.key.code == keyUp || event.key.code == keyDown)
		{
			direction = sf::Vector2f(0, 0);
		}
	}
}

void Paddle::Render(sf::RenderWindow& window)
{
	window.draw(paddleSprite);
}

void Paddle::Update(sf::Time deltaTime)
{
	paddleSprite.move(direction * speed * deltaTime.asSeconds());
}

sf::Vector2f Paddle::GetPosition()
{
	return paddleSprite.getPosition();
}

void Paddle::SetPosition(sf::Vector2f setPosition)
{
	paddleSprite.setPosition(setPosition);
}

float Paddle::GetSpeed()
{
	return speed;
}
