#include "Paddle.hpp"

Paddle::Paddle(sf::IntRect selectPaddle, sf::Vector2f setPosition)
{
	if (paddleTexture.loadFromFile("./assets/sprites.png", selectPaddle));
	{
		paddleSprite.setTexture(paddleTexture);
		paddleSprite.setOrigin(paddleSprite.getGlobalBounds().width / 2, paddleSprite.getGlobalBounds().height / 2);
		paddleSprite.setPosition(setPosition);
	}

	speed = 400;
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
	std::cout << "speed = " << speed * deltaTime.asSeconds() << std::endl;
	paddleSprite.move(direction * speed * deltaTime.asSeconds());
	IsCollidingWithWall();
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

bool Paddle::IsCollidingWithWall()
{
	if (paddleSprite.getPosition().y - paddleSprite.getGlobalBounds().height / 2 < 0)
	{
		paddleSprite.setPosition(paddleSprite.getPosition().x, paddleSprite.getGlobalBounds().height / 2);
		return true;
	}
	else if (paddleSprite.getPosition().y + paddleSprite.getGlobalBounds().height / 2 > 600)
	{
		paddleSprite.setPosition(paddleSprite.getPosition().x, 600 - paddleSprite.getGlobalBounds().height / 2);
		return true;
	}
	return false;
}

void Paddle::IsCollidingWithPuck(Puck& puck, float fromAngle, float toAngle)
{
	if (paddleSprite.getGlobalBounds().intersects(puck.GetSprite().getGlobalBounds()))
	{
		float diff = puck.GetSprite().getPosition().y - (paddleSprite.getPosition().y - paddleSprite.getGlobalBounds().height / 2);
		float angle = Map(diff, 0, paddleSprite.getGlobalBounds().height, fromAngle, toAngle);
		puck.SetSpeedX(5.0f * (float)cos(angle));
		puck.SetSpeedY(5.0f * (float)sin(angle));
	}
}

float Paddle::Map(float s, float a1, float a2, float b1, float b2)
{
	return b1 + (s - a1) * (b2 - b1) / (a2 - a1);
}
