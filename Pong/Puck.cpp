#include "Puck.hpp"

Puck::Puck()
{
	if (puckTexture.loadFromFile("..\\sprites.png", sf::IntRect(100, 0, 50, 50)));
	{
		puckSprite.setTexture(puckTexture);
		puckSprite.setOrigin(puckSprite.getGlobalBounds().width / 2, puckSprite.getGlobalBounds().height / 2);
		puckSprite.setPosition(500, 300);
	}

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(-pi / 4, pi / 4);

	angle = dis(gen);
	speedX = 5 * cos(angle);
	speedY = 5 * sin(angle);

	if (dis(gen) < 0.5)
	{
		speedX *= -1;
	}
}

Puck::~Puck()
{
}

void Puck::Event(sf::Event event)
{
	if (event.type == sf::Event::KeyPressed)
	{
		if (event.key.code == sf::Keyboard::Space)
		{
			Reset();
		}
	}
}

void Puck::Render(sf::RenderWindow& window)
{
	window.draw(puckSprite);
}

void Puck::Update(sf::Time deltaTime)
{
	IsCollidingWithWall();
	puckSprite.move(speedX, speedY);
}

sf::Sprite Puck::GetSprite()
{
	return puckSprite;
}

float Puck::GetSpeedX()
{
	return speedX;
}

float Puck::GetSpeedY()
{
	return speedY;
}

void Puck::SetSpeedX(float setSpeedX)
{
	speedX = setSpeedX;
}

void Puck::SetSpeedY(float setSpeedY)
{
	speedY = setSpeedY;
}

void Puck::IsCollidingWithWall()
{
	if (puckSprite.getPosition().y - puckSprite.getGlobalBounds().height / 2 <= 0 || puckSprite.getPosition().y + puckSprite.getGlobalBounds().height / 2 >= 600)
	{
		speedY = -speedY;
	}
}

void Puck::Reset()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(-pi/4, pi/4);
	angle = dis(gen);
	speedX = 5 * cos(angle);
	speedY = 5 * sin(angle);
	puckSprite.setPosition(500, 300);

	if (dis(gen) < 0.5)
	{
		speedX *= -1;
	}
}

//float Puck::RandomAngle()
//{
//	std::random_device rd;
//	std::mt19937 gen(rd());
//	std::uniform_real_distribution<> dis(-pi/4, pi/4);
//
//	if (dis(gen) < 0.5)
//	{
//		-angle;
//	}
//
//	return dis(gen);
//}
