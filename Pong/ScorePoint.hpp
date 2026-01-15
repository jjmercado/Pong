#pragma once
#include <SFML/Graphics.hpp>

class ScorePoint
{
	public:
		ScorePoint();
		~ScorePoint();
		void Update();
		void Render(sf::RenderWindow& window);
		void SetPosition(sf::Vector2f position);
		int GetScore();
		void SetScore();

	private:
		int score;
};

