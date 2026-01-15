#pragma once
#include <SFML/Graphics.hpp>
#include "ScorePoint.hpp"
#include "Puck.hpp"

class Score
{
	public:
		Score();
		~Score();
		void Update(Puck& puck);
		void Render(sf::RenderWindow& window);

	private:
		ScorePoint scoreLeft;
		ScorePoint scoreRight;
		sf::Font font;
		sf::Text textScoreLeft;
		sf::Text textScoreRight;
		sf::Text text;
};

