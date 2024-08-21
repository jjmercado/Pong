#include "Puck.hpp"

Puck::Puck()
{
	if (puckTexture.loadFromFile("..\\sprites.png", sf::IntRect(100, 0, 50, 50)));
	{
		puckSprite.setTexture(puckTexture);
		puckSprite.setOrigin(puckSprite.getGlobalBounds().width / 2, puckSprite.getGlobalBounds().height / 2);
		puckSprite.setPosition(500, 300);
	}
}

Puck::~Puck()
{
}

void Puck::Render(sf::RenderWindow& window)
{
	window.draw(puckSprite);
}
