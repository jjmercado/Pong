#include "ScorePoint.hpp"

ScorePoint::ScorePoint()
{
	score = 0;
}

ScorePoint::~ScorePoint()
{
}

void ScorePoint::Update()
{
}

void ScorePoint::Render(sf::RenderWindow& window)
{
}

void ScorePoint::SetPosition(sf::Vector2f position)
{
}

int ScorePoint::GetScore()
{
    return score;
}

void ScorePoint::SetScore()
{
	score++;
}
