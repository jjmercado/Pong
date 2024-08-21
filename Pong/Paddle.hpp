#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Paddle
{
	public:
		Paddle(sf::IntRect selectPaddle, sf::Vector2f setPosition);
		~Paddle();
		void Event(sf::Event event, sf::Keyboard::Key keyUp, sf::Keyboard::Key keyDown);
		void Render(sf::RenderWindow& window);
		void Update(sf::Time deltaTime);
		sf::Vector2f GetPosition();
		void SetPosition(sf::Vector2f setPosition);
		float GetSpeed();

	private:
		sf::Texture paddleTexture;
		sf::Sprite paddleSprite;
		float speed;
		sf::Vector2f direction;
		bool IsCollidingWithWall();
};

