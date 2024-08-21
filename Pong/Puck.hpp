#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <random>
#include <chrono>

class Puck
{
	public:
		Puck();
		~Puck();
		void Event(sf::Event event);
		void Render(sf::RenderWindow& window);
		void Update(sf::Time deltaTime);


	private:
		sf::Texture puckTexture;
		sf::Sprite puckSprite;
		sf::Vector2f direction;
		float velocity;
		float speedX;
		float speedY;
		float angle;
		void IsCollidingWithWall();
		void Reset();
		float RandomAngle();
		float pi = 3.14159274;
};

