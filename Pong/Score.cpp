#include "Score.hpp"

Score::Score()
{
	if (font.loadFromFile("..\\kenvector_future.ttf"))
	{
		textScoreLeft.setFont(font);
		textScoreLeft.setCharacterSize(60);
		textScoreLeft.setFillColor(sf::Color::White);
		textScoreLeft.setPosition(380, 15);
		textScoreLeft.setString("0");

		text.setFont(font);
		text.setCharacterSize(60);
		text.setFillColor(sf::Color::White);
		text.setPosition(500, 15);
		text.setString(":");

		textScoreRight.setFont(font);
		textScoreRight.setCharacterSize(60);
		textScoreRight.setFillColor(sf::Color::White);
		textScoreRight.setPosition(600, 15);
		textScoreRight.setString("0");
	}
}

Score::~Score()
{
}

void Score::Update(Puck& puck)
{
	if (puck.GetSprite().getPosition().x - puck.GetSprite().getGlobalBounds().width / 2 <= 0)
	{
		scoreRight.SetScore();
	}
	else if (puck.GetSprite().getPosition().x + puck.GetSprite().getGlobalBounds().width / 2 >= 1000)
	{
		scoreLeft.SetScore();
	}

	textScoreLeft.setString(std::to_string(scoreLeft.GetScore()));
	textScoreRight.setString(std::to_string(scoreRight.GetScore()));
}

void Score::Render(sf::RenderWindow& window)
{
	window.draw(textScoreLeft);
	window.draw(text);
	window.draw(textScoreRight);
}
