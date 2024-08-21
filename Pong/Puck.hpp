#pragma once
#include <SFML/Graphics.hpp>

class Puck
{
	public:
		Puck();
		~Puck();
		void Render(sf::RenderWindow& window);

	private:
		sf::Texture puckTexture;
		sf::Sprite puckSprite;
};

